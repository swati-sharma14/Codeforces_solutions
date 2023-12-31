#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin >> t;

    for(ll i = 0; i < t; i++){
        ll n, m;
        cin >> n >> m;

        bool has_zero = false;
        bool has_specialL = false;
        ll cnt = 0;
        vector<vector<char>> g(n, vector<char>(m));

        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cin >> g[i][j];
                if (g[i][j] == '0')
                    has_zero = true;
                cnt += g[i][j] - '0';
            }
        }

        for (int i = 0; i < n - 1 && !has_specialL; ++i){
            for (int j = 0; j < m - 1; ++j){
                int t = 0;
                t += g[i][j] - '0';
                t += g[i][j + 1] - '0';
                t += g[i + 1][j] - '0';
                t += g[i + 1][j + 1] - '0';
                if (t == 2 || t == 1)
                    has_specialL = true;
            }
        }

        if (has_specialL)
            cout << cnt << endl;
        else if (has_zero)
            cout << max(0LL, cnt - 1) << endl;
        else
            cout << max(0LL, cnt - 2) << endl;
    }
}
