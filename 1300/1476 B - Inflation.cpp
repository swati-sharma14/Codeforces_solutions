#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int 

int main() {
    ll l;
    cin >> l;

    for(ll q = 0; q < l; q++) {
        ll n, k;
        cin >> n >> k;
        
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin >> nums[i];
        
        long double s1 = 0.0;
        long double s2 = 0.0;
        
        for(ll i=1; i<n; i++){
            s2 += nums[i-1];
            s1 += nums[i-1];
            
            if(nums[i]/s1 * 100.0 > k){
                long double s = ((nums[i] * 1.0 * 100)/k) - s1;
                s = ceil(s);
                s1 += s;
            }
        }
        cout << (long long int)(s1 - s2) << endl;
    }
}
