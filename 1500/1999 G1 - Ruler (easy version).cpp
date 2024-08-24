#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

ll floor_formula(ll a, ll b){
    ll ans = a / b;
    while (ans * b > a) ans--;
    return ans;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll low = 2;
        ll high = 999;
        
        while(low <= high){
            ll mid = low + (high - low)/2;
            cout << "? " << mid << " " << mid << endl;
            ll prod;
            cin >> prod;
            
            if(prod > mid*mid){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        cout << "! " << low << endl;
    }
    
    return 0;
}
