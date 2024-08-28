#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    ll n, m, s, e, v;
    cin >> n >> m >> s >> e >> v;

    vector<ll> stairs(s);
    vector<ll> elevators(e);

    for(ll i = 0; i < s; i++) cin >> stairs[i];
    sort(stairs.begin(), stairs.end());
    for(ll i = 0; i < e; i++) cin >> elevators[i];
    sort(elevators.begin(), elevators.end());

    ll q;
    cin >> q;
    while(q--){
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (y1 > y2) swap(y1, y2);

        ll mn_time = 1e9;

        if(x1 == x2) mn_time = min(mn_time, abs(y1 - y2));
        
        // Check nearest stairway
        auto it = lower_bound(stairs.begin(), stairs.end(), y1);
        if (it != stairs.end()) {
            mn_time = min(mn_time, abs(*it - y1) + abs(*it - y2) + abs(x2 - x1));
        }
        if (it != stairs.begin()) {
            --it;
            mn_time = min(mn_time, abs(*it - y1) + abs(*it - y2) + abs(x2 - x1));
        }

        // Check nearest elevator
        it = lower_bound(elevators.begin(), elevators.end(), y1);
        if (it != elevators.end()) {
            mn_time = min(mn_time, abs(*it - y1) + abs(*it - y2) + (abs(x1 - x2) + v - 1) / v);
        }
        if (it != elevators.begin()) {
            --it;
            mn_time = min(mn_time, abs(*it - y1) + abs(*it - y2) + (abs(x1 - x2) + v - 1) / v);
        }

        cout << mn_time << "\n";
    }

    return 0;
}
