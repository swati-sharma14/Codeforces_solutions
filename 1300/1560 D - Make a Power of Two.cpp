#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

ll solve(string a, string b){
    ll pt_a = 0;
    ll pt_b = 0;

    while(pt_a < a.size()){
        if(a[pt_a] == b[pt_b]){
            pt_a++;
            pt_b++;
        }
        else pt_a++;
    }
    return a.size() + b.size() - (2*pt_b);
}

int main(){
    ll t;
    cin >> t;
  
    vector<ll> power;
    for(ll i=1; i<(ll)2e18; i*=2){
        power.push_back(i);
    }

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
    
        ll ans = n+1;
        for(ll j=0; j<power.size(); j++){
            ans = min(ans, solve(to_string(n), to_string(power[j])));
        }
        cout << ans << endl;
    }
}
