#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> nums(n);
        
        for (ll i = 0; i < n; i++) cin >> nums[i];
        
        sort(nums.begin(), nums.end());
        
        ll max_petals = 0;
        ll current_sum = 0;
        ll left = 0;
        
        for (ll right = 0; right < n; ++right) {
            // Add the current flower to the current bouquet
            current_sum += nums[right];
            
            // Check if the bouquet is valid
            while (nums[right] - nums[left] > 1 || (current_sum > m && left <= right)) {
                current_sum -= nums[left];
                ++left;
            }
            
            // Check if the bouquet cost exceeds the available coins
            if (current_sum <= m) {
                max_petals = max(max_petals, current_sum);
            }
            // cout << current_sum << " " << left << " " << right << " " << max_petals << endl;
        }
        
        cout << max_petals << endl;
    }
    return 0;
}
