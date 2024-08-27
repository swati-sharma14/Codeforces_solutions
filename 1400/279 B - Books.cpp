#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

int main() {
    ll n, t;
    cin >> n >> t;

    vector<ll> time(n);
    for(ll i=0; i<n; i++) cin >> time[i];

    ll ans = 0;
    ll curr_time = 0;
    ll left = 0;
    ll right = 0;

    while(right < n){
        curr_time += time[right];
        while(curr_time > t){
            curr_time -= time[left];
            left++;
        }
        ans = max(ans, right - left + 1);
        right++;
    }
    cout << ans << endl;
}
