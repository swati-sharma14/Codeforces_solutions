#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    for(ll q = 0; q < t; q++) {
        ll n;
        cin >> n;

        vector<ll> nums(n);
        for(ll i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<ll> prefix_sum(n);
        prefix_sum[0] = nums[0];
        for(ll i = 1; i < n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + nums[i];
        }

        ll low = 1;
        ll high = n;
        ll ans = 0;

        while(low <= high) {
            ll mid = low + (high - low) / 2;

            cout << "? " << (mid - low + 1) << " ";
            for(ll i = low; i <= mid; i++) {
                cout << i << " ";
            }
            cout << endl;

            ll sum;
            cin >> sum;

            ll expected_sum = prefix_sum[mid - 1];
            if(low > 1) {
                expected_sum -= prefix_sum[low - 2];
            }

            if(sum > expected_sum) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << "! " << ans << endl;
    }

    return 0;
}
