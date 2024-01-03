#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        vector<ll> nums, pos, neg, zero;
        map<ll,ll> mp;
    
        for(ll j=0; j<n; j++){
            ll a;
            cin >> a;
            
            if(a>0) pos.push_back(a);
            else if(a<0) neg.push_back(a);
            else{
                if(zero.size()<2) zero.push_back(a);
            }
            mp[a] += 1;
        }
        
        if(pos.size() > 2 || (neg.size() > 2)){
            cout << "No" << endl;
            continue;
        }
        
        for(ll j=0; j<pos.size(); j++){
            nums.push_back(pos[j]);
        }
        for(ll j=0; j<neg.size(); j++){
            nums.push_back(neg[j]);
        }
        for(ll j=0; j<zero.size(); j++){
            nums.push_back(zero[j]);
        }
        
        bool flag = true;
        
        for(ll j=0; j<nums.size(); j++){
            for(ll k=j+1; k<nums.size(); k++){
                for(ll l=k+1; l<nums.size(); l++){
                    if(!(mp[nums[j] + nums[k] + nums[l]])){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(!flag) break;
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
