#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll a, b;
        cin >> a >> b;
    
        vector<ll> nums1(a);
        vector<ll> nums2(b);
    
        for(ll j=0; j<a; j++){
            cin >> nums1[j];
        } 
        for(ll j=0; j<b; j++){
            cin >> nums2[j];
        }  

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        ll ans = 0;

        ll low_b = 0;
        ll high_b = b-1;

        ll low_a = 0;
        ll high_a = a-1;

        bool right = true;

        while(low_a != high_a){
            if(right){
                if(abs(nums2[high_b] - nums1[high_a]) > abs(nums2[low_b] - nums1[high_a])){
                    ans += abs(nums2[high_b] - nums1[high_a]);
                    high_b -= 1;
                }
                else if(abs(nums2[high_b] - nums1[high_a]) <= abs(nums2[low_b] - nums1[high_a])){
                    ans += abs(nums2[low_b] - nums1[high_a]);
                    low_b += 1;
                    right = false;
                }
                high_a -= 1;
            }
            else{
                if(abs(nums2[high_b] - nums1[low_a]) >= abs(nums2[low_b] - nums1[low_a])){
                    ans += abs(nums2[high_b] - nums1[low_a]);
                    high_b -= 1;
                    right = true;
                }
                else if(abs(nums2[high_b] - nums1[low_a]) < abs(nums2[low_b] - nums1[low_a])){
                    ans += abs(nums2[low_b] - nums1[low_a]);
                    low_b += 1;
                }
                low_a += 1;
            }
        }

        cout << ans << endl;
    }
}
