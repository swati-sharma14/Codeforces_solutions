#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll n, m;
    cin >> n >> m;

    ll ans = (n*n);
    
    vector<bool> rows(n, false);
    vector<bool> cols(n, false);
    ll row = 0;
    ll col = 0;
    
    for(ll i=0; i<m; i++){
        ll x,y;
        cin >> x >> y;

        if(rows[x-1] == false){
            rows[x-1] = true;
            ans -= (n-col);
            row += 1;
        }
        
        if(cols[y-1] == false){
            cols[y-1] = true;
            ans -= (n-row);
            col += 1;
        }
        
        cout << ans << " ";
    }
}
