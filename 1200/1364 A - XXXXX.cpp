#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin >> t;

    for(ll i = 0; i < t; i++){
        ll n, m;
        cin >> n >> m;

        ll sum = 0; 

        vector<ll> nums(n);
        for(ll j=0; j<n; j++){
            cin >> nums[j];
            sum += nums[j];
        }

        if(!sum%m){
            cout << n << endl;
            continue;
        }

        ll sum1 = sum;
        ll m1 = n;

        for(ll j=0; j<n; j++){
            if((sum1 - nums[j])%m){
                m1--;
                sum1 -= nums[j];
                break;
            }
            else{
                m1--;
                sum1 -= nums[j];
            }
        }

        ll sum2 = sum;
        ll m2 = n;

        for(ll j=n-1; j>=0; j--){
            if((sum1 - nums[j])%m){
                m2--;
                sum2 -= nums[j];
                break;
            }
            else{
                m2--;
                sum2 -= nums[j];
            }
        }

        ll ans = max(m1, m2);
        if(!ans) cout << "-1" << endl;
        else cout << ans << endl;
    }
}
