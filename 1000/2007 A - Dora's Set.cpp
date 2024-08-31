#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    ll t; 
    cin >> t;
    while(t--) {
        ll l, r;
        cin >> l >> r;
        ll count = 0;
        if(l%2 && r%2) count = ((r - l)/2) + 1;
        else if(l%2 || r%2) count = ((r - 1 - l)/2) + 1;
        else count = ((r - l)/2);
        
        cout << count / 2 << endl;
    }
    return 0;
}
