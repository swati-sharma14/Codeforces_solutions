#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

bool f(ll count, vector<ll>& nums, ll x, ll a, ll y, ll b, ll k) {
    ll total_sum = 0;

    ll lcm = a / __gcd(a, b) * b;
    ll xy = count / lcm;
    ll x_ = count / a - xy;
    ll y_ = count / b - xy;

    for (ll i = 0; i < xy; i++) total_sum += (nums[i] * (x + y)) / 100;
    for (ll i = xy; i < xy + x_; i++) total_sum += (nums[i] * x) / 100;
    for (ll i = xy + x_; i < xy + x_ + y_; i++) total_sum += (nums[i] * y) / 100;

    return total_sum >= k;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) cin >> nums[i];
        sort(nums.rbegin(), nums.rend());

        ll x, a, y, b;
        cin >> x >> a;
        cin >> y >> b;
        if (x < y) {
            swap(x, y);
            swap(a, b);
        }

        ll k;
        cin >> k;

        ll low = 0;
        ll high = n;
        ll ans = -1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (f(mid, nums, x, a, y, b, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
}
