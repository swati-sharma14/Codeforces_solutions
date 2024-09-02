#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        
        ll sum = r - l;
        // eqn n^2 + n - 2*sum = 0;
        ll n = ((sqrt(1 + (8*sum))) - 1)/2;
        n += 1;
        cout << n << endl;
    }
}
