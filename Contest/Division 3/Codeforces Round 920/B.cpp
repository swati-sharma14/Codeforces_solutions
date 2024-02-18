#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        string init;
        string fin;

        cin >> init;
        cin >> fin;

        ll count_add = 0;
        ll count_sub = 0;

        for(ll j=0; j<n; j++){
            if(init[j] == fin[j]) continue;
            if(init[j] == '0' && fin[j] == '1') count_add++;
            else count_sub++;
        }

        if(count_add > count_sub) cout << count_add << endl;
        else count_sub << endl;
    }
}
