#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    for (ll q = 0; q < t; q++) {
        ll n;
        cin >> n;

        ll ans = 0;
        for(ll i=3; i*i<=(2*n + 1); i+=2){
            ll b = (i*i - 1)/2;
            if((b + 1) <= n) ans++;
            // cout << b << endl;
        }
        cout << ans << endl;
    }
}
