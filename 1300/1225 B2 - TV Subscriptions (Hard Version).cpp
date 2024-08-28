#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    ll t; 
    cin >> t;
    while(t--) {
        ll n, k, d;
        cin >> n >> k >> d;

        vector<ll> nums(n);
        for(ll i = 0; i < n; i++) cin >> nums[i];

        unordered_map<ll, ll> freq;
        ll unique_count = 0;

        // Initialize the first window
        for(ll i = 0; i < d; i++) {
            if(freq[nums[i]] == 0) unique_count++;
            freq[nums[i]]++;
        }

        ll ans = unique_count;

        for(ll i = d; i < n; i++) {
            freq[nums[i - d]]--;
            if(freq[nums[i - d]] == 0) unique_count--;

            if(freq[nums[i]] == 0) unique_count++;
            freq[nums[i]]++;

            ans = min(ans, unique_count);
        }

        cout << ans << endl;
    }
    return 0;
}
