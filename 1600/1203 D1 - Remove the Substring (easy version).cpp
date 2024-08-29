#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
using namespace std;

#define ll long long

bool is_subsequence(string t, string s) {
    ll j = 0;
    for (ll i = 0; i < s.size() && j < t.size(); i++) {
        if (s[i] == t[j]) {
            j++;
        }
    }
    return j == t.size();
}

bool f(ll mid, string &s, string t, ll n) {
    for (ll i = 0; i <= n - mid; i++) {
        string temp = s;
        temp.erase(temp.begin() + i, temp.begin() + i + mid);
        if (is_subsequence(t, temp)) return true;
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
