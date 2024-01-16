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
        set<ll> st;

        for(ll j=0; j<n; j++){
            cin >> nums[j];
            mp[nums[j]] = j;
        }

        ll ans = 0;
        ll count = 0;

        for(ll j=0; j<n; j++){
            if(st.find(nums[j]) == st.end()){
                st.insert(nums[j]);
                count += 1;
            }
            if(mp[nums[j]] == j) ans += count;
        }

        cout << ans << endl;
    }
}
