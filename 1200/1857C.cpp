#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        ll length = (n*(n-1))/2;
        vector<ll> nums(length);

        for(ll j=0; j<length; j++){
            cin >> nums[j];
        }
        sort(nums.begin(), nums.end());
        vector<ll> ans(n);
        ll count = 0;
        
        for(ll j=0; j<n-1; j++){
            ans[j] = nums[count];
            count += n - j - 1;
            cout << ans[j] << " ";
        }
        ans[n-1] = ans[n-2];
        cout << ans[n-1] << endl;
    }
}