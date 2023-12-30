#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> jelly(n);
        vector<ll> gelly(m);

        for(ll j=0; j<n; j++){
            cin >> jelly[j];
        }
        for(ll j=0; j<m; j++){
            cin >> gelly[j];
        }
        
        sort(jelly.rbegin(), jelly.rend());
        sort(gelly.rbegin(), gelly.rend());
        if(jelly[jelly.size()-1] < gelly[0]){
            ll a = jelly[jelly.size()-1];
            jelly[jelly.size()-1] = gelly[0];
            gelly[0] = a;
        }

        if(k%2==0){
            sort(jelly.rbegin(), jelly.rend());
            sort(gelly.rbegin(), gelly.rend());
            if(gelly[gelly.size()-1] < jelly[0]){
                ll a = gelly[gelly.size()-1];
                gelly[gelly.size()-1] = jelly[0];
                jelly[0] = a;
            }
        }
        ll sum = 0;
        for(ll j= 0; j<jelly.size(); j++){
            sum += jelly[j];
        }
        cout << sum << endl;
    }
}