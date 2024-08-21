#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    ll q;
    cin >> q;
    
    for(ll t=0; t<q; t++){
        ll x, y;
        cin >> x >> y;
        
        ll z = x ^ y;
        ll msb = 0;
        
       while (z > 0) {
            msb++;
            if(z%2) break;
            z/=2;
        }
    
        cout << (ll)pow(2, msb - 1) << endl; // Cast to ll
    }
    return 0;
}
