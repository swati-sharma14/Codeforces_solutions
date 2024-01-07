#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll a, b;
        cin >> a >> b;
        cout << ((a + b) % 2 ? "Alice" : "Bob") << endl;
    }
}
