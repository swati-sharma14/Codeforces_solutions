#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

#define ll long long int

int main() {
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++) {
        ll n;
        cin >> n;

        vector<ll> nums(n);
        for (ll j = 0; j < n; j++) {
            cin >> nums[j];
        }

        vector<ll> odds(n);
        odds[0] = ((nums[0] % 2) ? 1 : 0);

        for (ll j = 1; j < n; j++) {
            odds[j] = odds[j - 1] + (nums[j] % 2);
        }

        // Calculate the prefix sum
        vector<ll> prefixSum(n);
        partial_sum(nums.begin(), nums.end(), prefixSum.begin());

        cout << prefixSum[0] << " ";
        for (ll j = 2; j <= n; j++) {
            ll odd_count = odds[j - 1];

            ll sum = prefixSum[j - 1];

            ll loss = (odd_count / 3) + (odd_count % 3 == 1);

            cout << sum - loss << " ";
        }
        cout << endl;
    }
    return 0;
}
