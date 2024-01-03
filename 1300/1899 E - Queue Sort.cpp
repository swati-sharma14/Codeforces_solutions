#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        for(ll j=0; j<n; j++){
            cin >> nums[j];
        }
        
        bool flag = true;
        vector<ll> copy_nums(n);
        copy_nums = nums;
        sort(copy_nums.begin(), copy_nums.end());
        
        ll index = -1;
        for(ll j=0; j<n; j++){
            if(nums[j] == copy_nums[0]){
                index = j;
                break;
            }
        }
        
        for(ll j = index+1; j<n-1; j++){
            if(nums[j] > nums[j+1]){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << "-1" << endl;
            continue;
        }
        else{
            cout << index << endl;
        }
        
        
    }
}
