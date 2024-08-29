#include <iostream>
#include <vector>
using namespace std;

#define ll long long

bool f(ll mid, string &s, string &t, ll n) {
    ll m = t.size();
    vector<ll> prefix(n + 1, 0);
    vector<ll> suffix(n + 1, 0);
    
    for (ll i = 0, k = 0; i < n && k < m; i++) {
        if (s[i] == t[k]) {
            k++;
        }
        prefix[i + 1] = k;
    }
    
    for (ll i = n - 1, k = 0; i >= 0 && k < m; i--) {
        if (s[i] == t[m - 1 - k]) {
            k++;
        }
        suffix[i] = k;
    }
    
    for (ll i = 0; i <= n - mid; i++) {
        if (prefix[i] + suffix[i + mid] >= m) {
            return true;
        }
    }
    return false;
}

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    ll n = s.size();
    ll low = 0;
    ll high = n;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (f(mid, s, t, n)) low = mid + 1;
        else high = mid - 1;
    }

    cout << high << endl;
}
