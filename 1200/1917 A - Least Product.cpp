#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
        
        vector<ll> timings(n);
        bool has_zero = false;
        bool pos_product = true;
        
        for(ll j=0; j<n; j++){
            cin >> timings[j];
            if(!timings[j]) has_zero = true;
            else if(timings[j] < 0){
                if(pos_product) pos_product = false;
                else pos_product = true;
            }
        }
        
        if(has_zero or !pos_product){
            cout << "0" << endl;
            continue;
        }
        else if(pos_product){
            cout << "1" << endl;
            cout << "1 0" << endl; 
        }
    }
}
