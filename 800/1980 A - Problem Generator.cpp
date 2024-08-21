#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long int 


int main() {
    ll l;
    cin >> l;

    for (ll q = 0; q < l; q++) {
        ll n, m;
        cin >> n >> m;

        vector<char> nums(n);
        map<char, ll> mp;
        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
            mp[nums[i]] += 1;
        }

        ll ans = 0;
        if(mp['A'] < m) ans += m - mp['A'];
        if(mp['B'] < m) ans += m - mp['B'];
        if(mp['C'] < m) ans += m - mp['C'];
        if(mp['D'] < m) ans += m - mp['D'];
        if(mp['E'] < m) ans += m - mp['E'];
        if(mp['F'] < m) ans += m - mp['F'];
        if(mp['G'] < m) ans += m - mp['G'];
        cout << ans << endl;
    }

    return 0;
}
