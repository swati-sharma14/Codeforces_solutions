#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    ll t; 
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        map<ll, ll> mp;
        ll ans = 0;
        for(ll i=0; i<n; i++){
            ll a;
            cin >> a;
            mp[a]++;
            ans = max(ans, mp[a]);
        }
        cout << n - ans << endl;
    }
    return 0;
}
