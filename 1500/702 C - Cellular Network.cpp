#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool f(vector<ll>& cities, vector<ll>& towers, ll mid) {
    ll j = 0;
    for (ll i = 0; i < cities.size(); i++) {
        while (j < towers.size() && abs(towers[j] - cities[i]) > mid) {
            j++;
        }
        if (j == towers.size()) return false;
    }
    return true; 
}

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> cities(n);
    for (ll i = 0; i < n; i++) cin >> cities[i];

    vector<ll> towers(m);
    for (ll i = 0; i < m; i++) cin >> towers[i];

    ll ans = 0;
    ll low = 0;
    ll high = INT_MAX;

    while (low <= high) {
        ll mid = low + (high - low) / 2;

        if (f(cities, towers, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
