#include <bits/stdc++.h>
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
        
        ll even_count = 0;
        ll odd_count = 0;
        ll mx_num = INT_MIN;
        ll mx_odd = INT_MIN;
        
        for(ll i=0; i<n; i++){
            if(nums[i]%2){
                mx_odd = max(mx_odd, nums[i]);
                odd_count++;
            }
            else even_count++;
            
            mx_num = max(mx_num, nums[i]);
        }
        
        if(odd_count == 0 || even_count == 0){
            cout << "0" << endl;
            continue;
        }
        
        ll ans1 = 0;
        vector<ll> nums2(nums.begin(), nums.end());
        ll mx_odd2 = mx_odd;
        
        sort(nums2.begin(), nums2.end());
        sort(nums.begin(), nums.end());
        for(ll i=n-1; i>=0; i--){
            if(nums[i]%2 == 0 && nums[i] < mx_odd){
                nums[i] += mx_odd;
                ans1++;
                mx_odd = max(mx_odd, nums[i]);
            }
            else if(nums[i]%2 == 0 && nums[i] > mx_odd){
                mx_odd = max(mx_odd, mx_odd + nums[i]);
                nums[i] += mx_odd;
                mx_odd = max(mx_odd, nums[i]);
                ans1 += 2;
            }
        }
        
        ll ans2 = 0;
        for(ll i=0; i<n; i++){
            if(nums2[i]%2 == 0 && nums2[i] < mx_odd2){
                nums2[i] += mx_odd2;
                ans2++;
                mx_odd2 = max(mx_odd2, nums2[i]);
            }
            else if(nums2[i]%2 == 0 && nums2[i] > mx_odd2){
                mx_odd = max(mx_odd2, mx_odd2 + nums2[i]);
                nums2[i] += mx_odd2;
                mx_odd2 = max(mx_odd2, nums2[i]);
                ans2 += 2;
            }
        }
        
        cout << min(ans2, ans1) << endl;
        
        
    }

}
