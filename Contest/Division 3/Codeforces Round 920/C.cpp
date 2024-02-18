#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> nums(n);
        for(ll j=0; j<n; j++){
            cin >> nums[j];
        }

        ll curr = 0;
        for(ll j=0; j<n; j++){
            if(f <= 0) break;

            if( b < (a*(nums[j] - curr))) f -= b;
            else f -= a*(nums[j] - curr);

            curr = nums[j];
        }

        if(f <= 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
