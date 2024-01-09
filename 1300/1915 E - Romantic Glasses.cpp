#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

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
    
        vector<ll> odd(n);
        vector<ll> even(n);
    
        for(ll j=0; j<n; j++){
            if(j==0){
                odd[j] = nums[j];
                even[j] = 0;
            }
            else if(j%2){
                even[j] = nums[j] + even[j-1];
                odd[j]  = odd[j-1];
            }
            else{
                odd[j] = odd[j-1] + nums[j];
                even[j] = even[j-1];
            }
        }
        
        map<ll,ll> mp;
        bool flag = false;
        
        for(ll j=0; j<n; j++){
            if(odd[j] == even[j]){
                flag = true;
                break;
            }
            if(mp[odd[j] - even[j]]){
                flag = true;
                break;
            }
            mp[odd[j] - even[j]] += 1;
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
