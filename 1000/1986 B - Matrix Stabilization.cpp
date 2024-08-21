#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define INF 1000000000LL

void stabilizeMatrix(vector<vector<ll>>& a, ll n, ll m) {
    auto is_greater_than_neighbors = [&](ll i, ll j) {
        static const vector<pair<ll, ll>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto [di, dj] : directions) {
            ll ni = i + di, nj = j + dj;
            if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                if (a[i][j] <= a[ni][nj]) {
                    return false;
                }
            }
        }
        return true;
    };

    auto max_of_neighbors = [&](ll i, ll j) {
        static const vector<pair<ll, ll>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        ll max_val = -INF;
        for (auto [di, dj] : directions) {
            ll ni = i + di, nj = j + dj;
            if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                max_val = max(max_val, a[ni][nj]);
            }
        }
        return max_val;
    };

    ll prev_x = 0, prev_y = 0;
    bool stabilized = false;

    while (!stabilized) {
        stabilized = true;
        pair<ll, ll> best_cell = {-1, -1};
        ll best_value = INF;

        for (ll i = prev_x; i < n; ++i) {
            for (ll j = (i == prev_x ? prev_y : 0); j < m; ++j) {
                if (is_greater_than_neighbors(i, j)) {
                    best_cell = {i, j};
                    best_value = a[i][j];
                    break;
                }
            }
            if (best_cell.first != -1) {
                break;
            }
        }

        if (best_cell.first != -1) {
            a[best_cell.first][best_cell.second] = max_of_neighbors(best_cell.first, best_cell.second);
            prev_x = best_cell.first;
            prev_y = best_cell.second;
            stabilized = false;
        }
    }
}

int main() {
    ll q;
    cin >> q;

    for (ll t = 0; t < q; ++t) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));

        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }

        stabilizeMatrix(a, n, m);

        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
