#include <bits/stdc++.h>
#include <algorithm> // Include algorithm before using namespace std
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

        ll check = 0;
        if (n % 2 != 0) // Fix the condition to check for even size
            check = 1;
        vector<ll> final;

        if (check)
            final.push_back(nums[0]);

        for (ll j = check; j < n; j += 2) {
            if (nums[j] > nums[j + 1]) {
                final.push_back(nums[j + 1]);
                final.push_back(nums[j]);
            } else {
                final.push_back(nums[j]);
                final.push_back(nums[j + 1]);
            }
        }

        if (is_sorted(final.begin(), final.end())) // Use iterators for is_sorted
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
