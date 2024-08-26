#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

bool f(ll mid, const string& s, ll elements) {
    map<char, ll> mp;
    for (ll i = 0; i <= mid; i++) {
        mp[s[i]]++;
    }
    
    if (mp.size() == elements) return true;
    
    for (ll i = mid + 1; i < s.size(); i++) {
        mp[s[i]]++;
        mp[s[i - mid - 1]]--;
        if (mp[s[i - mid - 1]] == 0) mp.erase(s[i - mid - 1]);
        if (mp.size() == elements) return true;
    }
    
    return false;
}

int main() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    map<char, ll> mp;
    for (ll i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    ll elements = mp.size();
    
    ll left = 0;
    ll right = n - 1; 
    ll ans = 0;

    while (left <= right) { 
        ll mid = left + (right - left) / 2;
        if (f(mid, s, elements)) {
            ans = mid + 1;
            right = mid - 1; 
        } else {
            left = mid + 1;
        }
    }
    
    cout << ans << endl;
}
