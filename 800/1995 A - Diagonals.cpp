#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ll t;
    cin >> t;
    for(ll i=0; i<t; i++){
        ll n, m;
        cin >> n >> m;
        
        if(!m){
            cout << "0" << endl;
            continue;
        }
        if(n >= m){
            cout << "1" << endl;
            continue;
        }
        
        ll ans = 1;
        ll curr = n - 1;
        m-=n;
        
        while(m > 0){
            ans++;
            m -= curr;
            
            if(m <= 0) break;
            
            ans++;
            m -= curr;
            curr--;
        }
        
        cout << ans << endl;
    }
    return 0;
}
