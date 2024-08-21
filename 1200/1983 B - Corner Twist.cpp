#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    
    for(ll q = 0; q < t; q++) {
        ll m, n;
        cin >> m >> n;
        
        vector<vector<ll>> a(m, vector<ll>(n, 0)); // Corrected type here
        vector<vector<ll>> b(m, vector<ll>(n, 0)); // Corrected type here
        
        ll sum_a = 0;
        for(ll i = 0; i < m; i++) {
            for(ll j = 0; j < n; j++) {
                char c;
                cin >> c;
                a[i][j] = c - '0';
                sum_a += a[i][j];
            }
            // cout << sum_a << " ";
            sum_a = 0;
        }
        // cout << endl;
        ll sum_b = 0;
        for(ll i = 0; i < m; i++) {
            for(ll j = 0; j < n; j++) {
                char c;
                cin >> c;
                b[i][j] = c - '0';
                sum_b += b[i][j];
            }
            // cout << sum_b << " ";
            sum_b = 0;
        }
        // cout << endl;   
        
        for(ll i=0; i<m-1; i++){
            for(ll j=0; j<n-1; j++){
                if(a[i][j] == b[i][j]) continue;
                if(a[i][j] == 0){
                    if(b[i][j] == 1){
                        a[i][j] = 1;
                        a[i+1][j+1] = (a[i+1][j+1] + 1)%3;
                        a[i+1][j] = (a[i+1][j] + 2)%3;
                        a[i][j+1] = (a[i][j+1] + 2)%3;
                    }
                    else{
                        a[i][j] = 2;
                        a[i+1][j+1] = (a[i+1][j+1] + 2)%3;
                        a[i+1][j] = (a[i+1][j] + 1)%3;
                        a[i][j+1] = (a[i][j+1] + 1)%3;
                    }
                }
                else if(a[i][j] == 1){
                    if(b[i][j] == 0){
                        a[i][j] = 0;
                        a[i+1][j+1] = (a[i+1][j+1] + 2)%3;
                        a[i+1][j] = (a[i+1][j] + 1)%3;
                        a[i][j+1] = (a[i][j+1] + 1)%3;
                    }
                    else{
                        a[i][j] = 2;
                        a[i+1][j+1] = (a[i+1][j+1] + 1)%3;
                        a[i+1][j] = (a[i+1][j] + 2)%3;
                        a[i][j+1] = (a[i][j+1] + 2)%3;
                    }
                }
                else{
                    if(b[i][j] == 0){
                        a[i][j] = 0;
                        a[i+1][j+1] = (a[i+1][j+1] + 1)%3;
                        a[i+1][j] = (a[i+1][j] + 2)%3;
                        a[i][j+1] = (a[i][j+1] + 2)%3;
                    }
                    else{
                        a[i][j] = 1;
                        a[i+1][j+1] = (a[i+1][j+1] + 2)%3;
                        a[i+1][j] = (a[i+1][j] + 1)%3;
                        a[i][j+1] = (a[i][j+1] + 1)%3;
                    }
                }
            }
        }
        
        bool flag = true;
        for(ll i=0; i<m; i++){
            for(ll j=0; j<n; j++){
                if(a[i][j] != b[i][j]){
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
        
        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}
