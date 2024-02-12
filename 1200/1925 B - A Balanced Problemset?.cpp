#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll x, n;
        cin >> x >> n;
        
        ll ans = 1;

        for(ll i=1; i*i<=x; i++){
            if(!(x%i)){
                if(x>=(i*n)) ans = max(ans, i);
                if(n<=i) ans = max(ans, x/i);
            }
        }
        cout << ans << endl;
    }
}
