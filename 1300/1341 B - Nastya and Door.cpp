#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

ll floor_formula(ll a, ll b){
    ll ans = a / b;
    while (ans * b > a) ans--;
    return ans;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) cin >> nums[i];

        vector<ll> prefix_sum(n, 0);

        for (ll i = 1; i < n - 1; i++) {
            prefix_sum[i] = prefix_sum[i - 1];
            if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1]) prefix_sum[i] += 1;
        }
        prefix_sum[n - 1] = prefix_sum[n - 2]; 

        ll ans = 0;
        ll left = 0;

        for (ll i = k - 1; i < n; i++) {
            ll current_peak_count = prefix_sum[i - 1] - prefix_sum[i - k + 1];
            if (current_peak_count > ans) {
                ans = current_peak_count;
                left = i - k + 1;
            }
        }

        cout << ans + 1 << " " << left + 1 << endl; 
    }
    
    return 0;
}
