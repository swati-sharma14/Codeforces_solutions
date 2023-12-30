#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

ll power_of_two(ll n){
    ll count = 0;
    while(n % 2 == 0){
        n /= 2;
        count += 1;
    }
    return count;
}

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        vector<ll> nums(n);
        ll total = 0;
        for(ll j=0; j<n; j++){
            cin >> nums[j];
            total += power_of_two(nums[j]);
        }
        
        vector<ll> powers(n,0);
        for(ll j=0; j<n; j++){
            powers[j] = power_of_two(j+1);
        }
        
        sort(powers.begin(), powers.end());
        
        int ans = 0;
        for(ll j=n-1; j>=0; j--){
            if(total >= n){
                cout << ans << endl;
                break;
            }
            total += powers[j];
            ans += 1;
        }

        if(total < n) cout << "-1" << endl;
    }
}