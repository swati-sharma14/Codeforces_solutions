#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ll q;
    cin >> q;
    
    for(ll t=0; t<q; t++){
        ll n;
        cin >> n;
        
        string s;
        cin >> s;
        
        map<ll, ll> mp;
        
        for(ll i=0; i<s.size(); i++) mp[s[i]] += 1;
        
        ll ans = 0;
        ans += min(n, mp['A']);
        ans += min(n, mp['B']);
        ans += min(n, mp['C']);
        ans += min(n, mp['D']);
        
        cout << ans << endl;
    }

}
