#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

int main() {
    ll q;
    cin >> q;

    for (ll t = 0; t < q; ++t) {
        ll n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        map<int, int> mp;
        for (int i = 0; i < m; i++) {
            int f;
            cin >> f;  // Fixed variable name 'c' to 'f' to match the input
            mp[f] += 1;
        }
        
        string c;
        cin >> c;
        
        sort(c.begin(), c.end());
        
        int idx = 0;
        for (auto& x : mp) {
            int pos = x.first;  // Use 'pos' to avoid confusion with 'idx'
            s[pos - 1] = c[idx];
            idx++;
            // for (int count = 0; count < x.second && idx < c.size(); ++count) {
            //     s[pos] = c[idx];
            //     idx++;
            // }
            // cout << pos << " " << idx << " " << s[pos - 1] << " " << c[idx] << endl;
        }
        
        cout << s << endl;
    }

    return 0;  // Added return 0 for proper main function termination
}
