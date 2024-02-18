#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll n;
        cin >> n;
        
        vector<ll> arr(2*n, 0);
        for(ll i=0; i<(2*n); i++){
            cin >> arr[i];
        }
        
        ll ans = 0;
        sort(arr.begin(), arr.end());
        for(ll i=0; i<(2*n); i+=2)ans += arr[i];
        cout << ans << endl;
    }
}
