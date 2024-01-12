#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    map<ll,ll> years;
    for(ll i=0; i<t; i++){
        ll b,d;
        cin >> b >> d;
        years[b] += 1;
        years[d] -= 1;
    }

    ll ans_count = 0;
    ll ans_year = 0;
    ll curr = 0;

    for(auto& x:years){
        curr += x.second ;
        if(curr > ans_count){
            ans_count = curr;
            ans_year = x.first;
        }
    }
    cout << ans_year << " " << ans_count << endl;
}
