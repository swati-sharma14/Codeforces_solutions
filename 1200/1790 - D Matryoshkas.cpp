#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        vector<ll> nums(n);
        map<ll,ll> mp;
        set<ll> s;
        for(ll j=0; j<n; j++){
            cin >> nums[j];
            mp[nums[j]] += 1;
            s.insert(nums[j]);
            s.insert(nums[j]+1);
        }

        ll ans = 0;
        ll last = 0;

        for(auto& x:s){
            ll count = mp[x];
            ans += max(static_cast<long long int>(0), count - last);
            last = count;
        }
        
        cout << ans << endl;
    }
}
