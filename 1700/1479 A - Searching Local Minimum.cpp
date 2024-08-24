#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;

    ll low = 1;
    ll high = n;
    
    while(low <= high){
        ll mid = low + (high - low) / 2;
        ll mid_val, mid_left_val = LLONG_MAX, mid_right_val = LLONG_MAX;

        cout << "? " << mid << endl;
        cin >> mid_val;

        if(mid > 1){
            cout << "? " << mid - 1 << endl;
            cin >> mid_left_val;
        }
        
        if(mid < n){
            cout << "? " << mid + 1 << endl;
            cin >> mid_right_val;
        }
        
        if(mid_val < mid_left_val && mid_val < mid_right_val){
            cout << "! " << mid << endl;
            return 0;
        }
        else if(mid_val > mid_left_val){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return 0;
}
