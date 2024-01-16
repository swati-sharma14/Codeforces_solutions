#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll n, m;
    cin >> n >> m;
    
    vector<ll> nums(m);
    set<ll> st1;
    set<ll> st2;
    map<ll, ll> mp;

    for(ll i=0; i<m; i++){
        cin >> nums[i];
    }

    for(ll i=1; i<=n; i++){
        st1.insert(i);
        st2.insert(i);
    }

    for(ll i=0; i<m; i++){
        st1.erase(nums[i]);
        if(st1.empty()){
            cout << "1";
            st1 = st2;
            for(auto& x:mp){
                if(x.second == 1) x.second = 0;
                if(x.second >= 2){
                    x.second -= 1;
                    st1.erase(x.first);
                }
            }
        }
        else{
            mp[nums[i]] += 1;
            cout << "0";
        }
    }
}
