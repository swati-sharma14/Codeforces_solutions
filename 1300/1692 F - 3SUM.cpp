#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool compareLastDigit(const ll &a, const ll &b) {
    return a % 10 < b % 10;
}

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
    
        vector<ll> nums(n);
        map<ll,ll> mp;
    
        for(ll j=0; j<n; j++){
            cin >> nums[j];
            mp[nums[j]%10] += 1;
        }  
        
        bool flag = false;
        for(ll j=0; j<10; j++){
            if(mp[j]){
                mp[j] -=1;
                for(ll k=0; k<10; k++){
                    if(mp[k]){
                        mp[k] -= 1;
                        for(ll l=0; l<10; l++){
                            if(mp[l]){
                                mp[l] -= 1;
                                if((j+k+l)%10 == 3){
                                    flag = true;
                                    break;
                                }
                                mp[l] += 1;
                            }
                        }
                        mp[k] += 1;
                    }
                    if(flag) break;
                }
                mp[j] += 1;
            }
            if(flag) break;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
