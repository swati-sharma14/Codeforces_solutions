#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        map<ll, ll> mp;
        for(ll j=0; j<n; j++){
            cin >> nums[j];
            mp[nums[j]] += 1;
        }

        ll ans = 0;
        ll a = mp[1];
        ll b = mp[2];

        ans += a*b;

        for(auto& x:mp){
            ll n = x.second;
            ans += ((n*(n-1))/2);
        }
        cout << ans << endl;
    }
}