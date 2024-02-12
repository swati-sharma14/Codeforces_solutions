#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    vector<ll> arr(l, 0);
    for(ll k=0; k<l; k++){
        cin >> arr[k];
    }
    sort(arr.begin(), arr.end());

    ll curr = 0;
    ll ans = 0;
    for(ll i=0; i<l; i++){
        if(arr[i] < curr) ans += 1;
        else curr += arr[i];
    }
    cout << l - ans << endl;
}
