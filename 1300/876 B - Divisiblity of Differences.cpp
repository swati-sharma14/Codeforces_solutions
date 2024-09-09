#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k, m;
    cin >> n >> k >> m;

    vector<ll> nums(n);
    for(ll i=0; i<n; i++) cin >> nums[i];

    map<int, vector<ll>> mp;
    for(ll i=0; i<n; i++){
        mp[nums[i]%m].push_back(nums[i]);
        if(mp[nums[i]%m].size() == k){
            cout << "Yes" << endl;
            
            for(ll j=0; j<k; j++) cout << mp[nums[i]%m][j] << " ";
            cout << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
