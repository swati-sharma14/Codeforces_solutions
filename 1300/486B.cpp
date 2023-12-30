#include <iostream>
using namespace std;

#define ll long long

int main() {
    ll m, n, t, c, d, i, j, k, x, y, z, l, q, r;

    cin >> n >> m;
    ll a[n][m], b[n][m];

    // Input
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> b[i][j];
            a[i][j] = 1;
        }
    }

    // Processing
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (b[i][j] == 0) {
                for (k = 0; k < m; k++) a[i][k] = 0;
                for (k = 0; k < n; k++) a[k][j] = 0;
            }
        }
    }

    // Verification
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            y = 0;
            for (k = 0; k < m; k++) y |= a[i][k];
            for (k = 0; k < n; k++) y |= a[k][j];

            if (y != b[i][j]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    // Output
    cout << "YES" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
