#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    ll t; 
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        vector<ll> h(n);

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(ll i = 0; i < n; i++) cin >> h[i];

        if(*min_element(all(a)) > k) {
            cout << 0 << endl;
            continue;
        }
        
        ll i = 0, j = 0;
        ll ans = 1;
        ll sum = 0;
        while(j < n) {
            if(j == 0) {
                j++;
                continue;
            }
            if(h[j - 1] % h[j] == 0) {
                if(i == j) i = j - 1;
                if(sum == 0) sum += a[j - 1];
                sum += a[j];
            } else {
                sum = 0;
                i = j;
            }

            if(sum > k) {
                while(sum > k) {
                    sum -= a[i];
                    i++;
                }
            }
            if(i >= j) sum = 0;
            ans = max(ans, j - i + 1);
            j++;
        }
        cout << ans << endl;
    }
}
