#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n = 4;
        
        vector<pair<ll,ll>> nums;
        for(ll j=0; j<4; j++){
            ll a, b;
            cin >> a >> b;
            nums.push_back({a,b});
        }

        ll ans_0 = (pow(nums[0].first - nums[1].first, 2)) + (pow(nums[0].second - nums[1].second, 2));
        ll ans_1 = (pow(nums[0].first - nums[2].first, 2)) + (pow(nums[0].second - nums[2].second, 2));
        cout << min(ans_0, ans_1) << endl; 
    }
}
