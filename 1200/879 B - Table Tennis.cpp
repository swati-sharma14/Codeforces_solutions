#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll n, k;
    cin >> n >> k;

    vector<ll> nums(n);

    for(ll j=0; j<n; j++){
        cin >> nums[j];
    }   

    ll ans = -1;
    ll count = 0;

    for(ll j=0; j<n; j++){
        if(ans < nums[j]){
            if(j!=0) count = 1;
            ans = nums[j];
            continue;
        }
        count++;
        if(count == k){
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans << endl;
}
