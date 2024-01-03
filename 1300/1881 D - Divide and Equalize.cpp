#include <bits/stdc++.h>
using namespace std;
#define ll long long

void primeFactors(int n, map<ll,ll>& mp){ 
    while (n%2 == 0){  
        mp[2] += 1;
        n = n/2;  
    }  
  
    for(int i = 3; i <= sqrt(n); i = i + 2){    
        while (n%i == 0){  
            mp[i] += 1;
            n = n/i;  
        }  
    }  
    if(n>2) mp[n] += 1;  
} 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        map<ll, ll> mp;
        for(ll j=0; j<n; j++){
            cin >> nums[j];
            primeFactors(nums[j], mp);
        }
        
        bool flag = true;
        for(auto& x:mp){
            if(x.second%n){
                flag = false;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}
