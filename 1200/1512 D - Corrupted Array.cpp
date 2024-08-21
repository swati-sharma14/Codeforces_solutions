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
        ll n;
        cin >> n;

        vector<ll> nums(n+2);
        ll total = 0;
        map<ll,ll> mp;
        for(ll i=0; i<n+2; i++){
            cin >> nums[i];
            total += nums[i];
            mp[nums[i]] += 1;
        }
        
        sort(nums.begin(), nums.end());
        
        bool flag = false;
        // CASE - 1
        ll b = n;
        total -= nums[b+1];
        mp[nums[b+1]] -= 1;
        if(mp[total - nums[b+1]]){
            flag = true;
            mp[total - nums[b+1]] -= 1;
            for(auto& x:mp){
                for(ll p=0; p<x.second; p++) cout << x.first << " ";
            }
            cout << endl;
        }
        
        if(flag) continue;
        mp[nums[b+1]] += 1;
        total += nums[b+1];
        // CASE - 2
        b = n;
        total -= nums[b];
        mp[nums[b]] -= 1;
        if(mp[total - nums[b]]){
            mp[total - nums[b]] -= 1;
            for(auto& x:mp){
                for(ll p=0; p<x.second; p++) cout << x.first << " ";
            }
            cout << endl;
        }
        else cout << "-1" << endl;
    }
}
