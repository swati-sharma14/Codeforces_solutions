#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll n;
    cin >> n;

    vector<ll> nums(n);
    for(ll j=0; j<n; j++){
        cin >> nums[j];
    }   

    ll ans = -1;
    ll count = 1e9 + 90;

    for(ll i=0; i<n; i++){
        ll len = n;
        ll time = max(0LL, (nums[i] - i));
        
        time = ceil(double(time)/len);
        if(count > time){
            count = time;
            ans = i+1;
        }
    }
    cout << ans << endl;
}
