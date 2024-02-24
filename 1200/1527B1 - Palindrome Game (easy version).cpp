#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    for(ll k=0; k<t; k++){
        ll size;
        string s;
        cin >> size >> s;

        ll count = 0;
        for(ll i=0; i<size; i++){
            if(s[i]=='0') count++;
        }
        if(count%2 && count!=1) cout << "ALICE" << endl;
        else cout << "BOB" << endl;
    }
}
