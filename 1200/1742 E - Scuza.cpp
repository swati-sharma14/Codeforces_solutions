#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n, q;
        cin >> n >> q;

        vector<ll> stepsize(n+1);
        vector<ll> pref(n+1);
        vector<ll> maxi(n+1);
        for(ll j=1; j<=n; j++){
            cin >> stepsize[j];
            pref[j] = pref[j-1] + stepsize[j];
            maxi[j] = max(maxi[j-1], stepsize[j]);
        }
        
        for(ll j=0; j<q; j++){
            ll ans = 0;
            ll x;
            cin >> x;
            ll k = upper_bound(maxi.begin(), maxi.end(), x) - maxi.begin() - 1;

            if(k>=0){
                ans = pref[k];
            }
            cout << ans[k] << " ";
        }
        cout << endl;
    }
}
