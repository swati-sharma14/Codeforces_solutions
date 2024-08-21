#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    vector<ll> nums(n);
    for (ll i = 0; i < n; i++){
        ll a;
        cin >> a;
        nums[i] = abs(a);
    }

    sort(nums.begin(), nums.end());
    ll ans = 0;
    
    for(ll i=0; i<n; i++){
        ll pos = upper_bound(nums.begin(), nums.end(), 2*nums[i]) - nums.begin();
        pos--;
        ans += abs(i - pos);
    }
    cout << ans << endl;
}
