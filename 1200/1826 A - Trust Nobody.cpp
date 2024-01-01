#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main() {
    ll t;
    cin >> t;

    for(ll j=0; j<t; j++){
        ll n;
        cin >> n;

        vector<ll> nums(n);
        for(ll i=0; i<n; i++){
            cin >> nums[i];
        }
        
        ll ans = -1;
        for(ll i=0; i<=n; i++){
            ll count = 0;

            for(ll k=0; k<nums.size(); k++){
                if(nums[k] > i) count++;
            }

            if(count == i){
                ans = count;
                break;
            }
        }
        cout << ans << endl;
    }
}
// 0 1 1 2 2 4 7 8 9 
