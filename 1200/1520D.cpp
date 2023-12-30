#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        ll ans = 0;
        map<ll,ll> mp;

        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;

            ans += mp[x-i];
            mp[x-i] += 1;
        }
        
        cout << ans << endl;
    }
}