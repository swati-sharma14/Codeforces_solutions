#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

#define ll long long

ll floor_formula(ll a, ll b){
    ll ans = a/b;
    while(ans * b > a) ans--;
    return ans;
}

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        vector<ll> nums(n);
        vector<ll> prefix_sum(n);
        ll ans = INT_MAX;
        
        for (ll i = 0; i < n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        
        prefix_sum[0] = nums[0];
        for(ll i=1; i<n; i++) prefix_sum[i] = prefix_sum[i-1] + nums[i];
        
        for(ll y=0; y<n; y++){
            ll x = max(0ll, nums[0] - floor_formula(k - prefix_sum[n - y - 1] + nums[0], y + 1));
            ans = min(ans, x + y);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
