#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define ll long long

pair<ll, ll> findMex(const vector<ll>& vec) {
    set<ll> s(vec.begin(), vec.end());
    
    ll mex1 = 0;
    while (s.find(mex1) != s.end()) {
        mex1++;
    }
    
    ll mex2 = mex1 + 1;
    while (s.find(mex2) != s.end()) {
        mex2++;
    }
    
    return {mex1, mex2};
}

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, m;
        cin >> n >> m;
        
        vector<vector<ll>> seq(n);
        vector<pair<ll, ll>> mex(n);
        
        for (ll i = 0; i < n; i++) {
            ll sz; 
            cin >> sz;
            
            vector<ll> nums(sz);
            for (ll j = 0; j < sz; j++) cin >> nums[j];
            sort(nums.begin(), nums.end());
            seq[i] = nums;
            
            // Find MEX values
            mex[i] = findMex(nums);
        }
        
        ll ans = 0;
        for (ll i = 0; i <= m; i++) {
            ll curr_max_val = 0;
            ll x = i;
            for (ll j = 0; j < n; j++) {
                ll first_val = mex[j].first;
                ll second_val = mex[j].second;
                
                if(x > first_val) x = max(x, second_val);
                else x = second_val;
            }
            ans += x;
            // cout << x << endl;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
