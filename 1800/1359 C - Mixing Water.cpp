#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

#define ll long long
#define ld long double

ld f(ll mid, ll h, ll c, ll t) {
    ll h_count = (mid / 2);
    if(mid%2) h_count++;
    ll c_count = mid - h_count;
    
    ld avg_temp = ((h_count * h) + (c_count * c)) / (ld)mid;
    return avg_temp;
}

int main() {
    ll p;
    cin >> p;
    
    while(p--) {
        ll h, c, t;
        cin >> h >> c >> t;
        
        // Special cases: if t is exactly h or c
        if (t == h) {
            cout << 1 << endl;
            continue;
        }
        
        if (t * 2 <= (h + c)) {
            cout << 2 << endl;
            continue;
        }
        
        ll low = 1;
        ll high = 1e6;  // Limiting the search space
        
        double min_diff = INT_MAX;
        ll ans = 0;
        
        for(ll i=0; i<=125; i++){
            while (low <= high) {
                ll mid = low + (high - low) / 2;
                ld avg_temp = f(mid, h, c, t);
                ld curr_diff = fabs(avg_temp - t);
                
                if (curr_diff < min_diff && curr_diff <= t) {
                    min_diff = curr_diff;
                    ans = mid;
                }
                
                if (avg_temp <= t) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
