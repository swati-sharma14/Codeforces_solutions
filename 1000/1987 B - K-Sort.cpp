#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    
    for (ll q = 0; q < t; q++) {
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) cin >> nums[i];
        
        ll larg = nums[0];
        vector<ll> count;
        for (ll i = 1; i < n; i++) {
            if(nums[i] < larg){
                count.push_back(larg - nums[i]);
            }
            else{
                larg = nums[i];
            }
        }
        
        sort(count.begin(), count.end());
        ll ans = 0;
        
        ll dec = 0;
        for (ll i = 0; i < count.size(); i++) {
            // cout << count[i] << " ";
            ans += (count[i] - dec) * (count.size() - i + 1);
            dec = count[i];
        }
        
        cout << ans << endl;
    }

    return 0;
}
