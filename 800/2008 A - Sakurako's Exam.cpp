#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if((!a && b%2) || (a%2 && !b)) cout << "NO" << endl;
        else if(b%2 && a%2) cout << "NO" << endl;
        else if(b%2 && !(a%2)) cout << "YES" << endl;
        else if(a%2 && !(b%2)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
