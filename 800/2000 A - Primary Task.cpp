#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#include <stdio.h>
#define ll long long 

int main()
{
    
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll n;
        cin >> n;
        
        vector<ll> nums;
        while(n){
            nums.push_back(n%10);
            n/=10;
        }
        if(nums.size() <= 2){
            cout << "NO" << endl;
            continue;
        }
        if(nums[nums.size()-1] != 1 || nums[nums.size() - 2] != 0){
            cout << "NO" << endl;
            continue;
        }
        
        ll count = 0;
        ll index = 0;
        bool flag = false;
        
        for(ll i=0; i<nums.size() - 2; i++){
            count += pow(10, index)*nums[i];
            index++;
            if(!nums[i]) flag = true;
            else flag = false;
        }
        
        if(flag || count < 2){
            cout << "NO" << endl;
            continue;
        }
        else cout << "YES" << endl;
        
    }
}
