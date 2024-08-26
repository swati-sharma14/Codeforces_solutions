#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

bool f(ll mid, vector<ll>& nums){
    vector<ll> updated(nums.begin(), nums.end());
    for(ll i = nums.size() - 1; i >= 2; i--){
        ll d = (min(nums[i], updated[i] - mid)) / 3;
        updated[i - 1] += d;
        updated[i - 2] += 2 * d;
    }
    for(ll i = 0; i < nums.size(); i++) {
        if(updated[i] < mid) return false;
    }
    return true;
}

int main(){
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;

        vector<ll> nums(n);
        ll low = 0;
        ll high = 0;
        for(ll i = 0; i < n; i++){
            cin >> nums[i];
            high = max(high, nums[i]);
        }

        ll ans = 0;

        while(low <= high){
            ll mid = low + (high - low) / 2;
            if(f(mid, nums)){
                ans = mid;
                low = mid + 1; 
            }
            else high = mid - 1; 
        }

        cout << ans << endl;
    }
    return 0;
}
