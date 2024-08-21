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
        
        ll k;
        cin >> k;
        
        for(ll i=0; i<k; i++){
            bool flag = true;
            string m;
            cin >> m;
            
            if(m.size() != n){
                cout << "NO" << endl;
                continue;
            }
            
            // First phase
            map<ll, char> mp2;
            for(ll j=0; j<n; j++){
                if(mp2.find(nums[j]) != mp2.end() && mp2[nums[j]] != m[j]){
                    flag = false;
                    break;
                }
                else{
                    mp2[nums[j]] = m[j];
                }
            }
            
            if(!flag){
                cout << "NO" << endl;
                continue;
            }
            
            // Second phase
            map<char, ll> mp;
            for(ll j=0; j<m.size(); j++){
                if(mp.find(m[j]) != mp.end() && mp[m[j]] != nums[j]){
                    flag = false;
                    break;
                }
                else{
                    mp[m[j]] = nums[j];
                }
            }
            
            if(!flag){
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;
        }
    }
}
