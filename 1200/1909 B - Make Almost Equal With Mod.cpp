#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        vector<ll> nums;
        for(ll j=0; j<n; j++){
            cin >> nums[j];
        }

        ll ans = 2;
        while(1){
            set<ll> remainder;
            for(ll j=0; j<nums.size(); j++){
                remainder.insert(nums[i]%ans);
            }
            if(remainder.size()==2) break;
            ans*=2;
        }
        cout << ans << endl;
    }
}
