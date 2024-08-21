#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ll n;
    cin >> n;
    
    for(ll i=0; i<n; i++){
        ll k, a;
        cin >> a >> k;
        
        cout << (a-1)*k + 1 << endl;
    }

}
