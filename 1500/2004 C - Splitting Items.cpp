#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <stdio.h>
#define ll long long 
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll n, k;
        cin >> n >> k;
        
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin >> nums[i];
        
        sort(nums.rbegin(), nums.rend());
        ll sum = 0;
        
        for(ll i=0; i<n; i++){
            if(i%2 == 0) sum += nums[i];
            else{
                if(k >= (nums[i-1] - nums[i])){
                    k-=(nums[i-1] - nums[i]);
                    sum -= nums[i-1];
                }
                else{
                    sum -= (nums[i] + k);
                    k = 0;
                }
            }
        }
        
        cout << ((sum > 0) ? sum : 0) << endl;
    }
}
