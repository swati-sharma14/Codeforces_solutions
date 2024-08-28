#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;

// Function to find the modular inverse of A under modulo M
ll moduloinverse(ll A, ll M) {
    ll m0 = M, y = 0, x = 1;
    if (M == 1) return 0;
    while (A > 1) {
        ll q = A / M;
        ll t = M;

        // M is remainder now, process same as the Euclidean algorithm
        M = A % M, A = t;
        t = y;
        
        // Update x and y
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0) x += m0;

    return x;
}

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n, m;
        cin >> n >> m;

        map<ll, ll> mp;
        for(ll i = 0; i < n; i++) {
            ll a;
            cin >> a;
            mp[a]++;
        }

        if(m > n) {
            cout << 0 << endl;
            continue;
        }

        vector<ll> nums;
        for(auto& x : mp) nums.push_back(x.first);
        
        if(nums.size() < m) {
            cout << 0 << endl;
            continue;
        }
        
        ll ans = 0;
        ll curr_prod = 1;
        ll left = nums[0];
        ll right = nums[m-1];
        
        // Calculate the product of the first 'm' elements
        for(ll i = 0; i < m; i++) {
            curr_prod = (curr_prod * mp[nums[i]]) % MOD;
        }
        
        if(right - left < m) ans = (ans + curr_prod) % MOD;
        
        // Slide the window over the remaining elements
        for(ll i = m; i < (ll)nums.size(); i++) {
            curr_prod = (curr_prod * moduloinverse(mp[nums[i-m]], MOD)) % MOD;
            curr_prod = (curr_prod * mp[nums[i]]) % MOD;
            right = nums[i];
            left = nums[i-m+1];
            if(right - left < m) ans = (ans + curr_prod) % MOD;
        }

        cout << ans << endl;
    }

    return 0;
}
