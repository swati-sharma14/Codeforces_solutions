#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ll q;
    cin >> q;
    
    for(ll t=0; t<q; t++){
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin >> nums[i];
        
        ll mn = 1e10+7;
        for(int i=1; i<n; i++){
            ll mx = max(nums[i], nums[i-1]);
            mn = min(mn, mx - 1);
        }
        cout << mn << endl;
    }
    return 0;
}
