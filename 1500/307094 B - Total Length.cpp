#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

int main() {
    ll n, sum;
    cin >> n >> sum;

    vector<ll> nums(n);
    for(ll i=0;i <n; i++) cin >> nums[i];
    ll ans = 0;
    ll curr_sum = 0;
    ll left = 0;
    ll right = 0;

    while(right < n){
        curr_sum += nums[right];
        while(left <= right && sum < curr_sum){
            curr_sum -= nums[left];
            left++;
        }
        ll count = right - left + 1;
        ans += ((count*(count+1))/2);
        right++;
    }
    cout << ans << endl;
}
