#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#include <map>
#include <stdio.h>
#define ll long long 

int main()
{
    
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin >> nums[i];
        
        map<ll,ll> mp;
        mp[nums[0]] = 1;
        
        bool flag = true;
        for(ll i=1; i<n; i++){
            if(mp[nums[i] - 1] == 1 || mp[nums[i] + 1] == 1) mp[nums[i]] = 1;
            else{
                flag = false;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
