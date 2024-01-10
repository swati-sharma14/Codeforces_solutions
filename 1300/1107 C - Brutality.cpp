#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main() {
    string n_str, k_str;
    cin >> n_str >> k_str;

    __int128 n = stoll(n_str);
    __int128 k = stoll(k_str);

    vector<__int128> hits(n);
    string key;

    for (ll j = 0; j < n; j++) {
        string hit_str;
        cin >> hit_str;
        hits[j] = stoll(hit_str);
    }

    cin >> key;

    __int128 ans = 0;
    ll index = 1;
    char curr = key[0];

    vector<__int128> curr_pow;
    curr_pow.push_back(hits[0]);

    while (index < n) {
        if (key[index] != curr) {
            sort(curr_pow.begin(), curr_pow.end(), greater<__int128>());

            ll len = min(static_cast<ll>(curr_pow.size()), static_cast<ll>(k));
            ans += accumulate(curr_pow.begin(), curr_pow.begin() + len, (__int128)0);

            curr_pow.clear();
        }
        curr_pow.push_back(hits[index]);
        curr = key[index];
        index++;
    }

    sort(curr_pow.begin(), curr_pow.end(), greater<__int128>());
    ll len = min(static_cast<ll>(curr_pow.size()), static_cast<ll>(k));
    ans += accumulate(curr_pow.begin(), curr_pow.begin() + len, (__int128)0);

    cout << (long long)ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main() {
    string n_str, k_str;
    cin >> n_str >> k_str;

    __int128 n = stoll(n_str);
    __int128 k = stoll(k_str);

    vector<__int128> hits(n);
    string key;

    for (ll j = 0; j < n; j++) {
        string hit_str;
        cin >> hit_str;
        hits[j] = stoll(hit_str);
    }

    cin >> key;

    __int128 ans = 0;
    ll index = 1;
    char curr = key[0];

    vector<__int128> curr_pow;
    curr_pow.push_back(hits[0]);

    while (index < n) {
        if (key[index] != curr) {
            sort(curr_pow.begin(), curr_pow.end(), greater<__int128>());

            ll len = min(static_cast<ll>(curr_pow.size()), static_cast<ll>(k));
            ans += accumulate(curr_pow.begin(), curr_pow.begin() + len, (__int128)0);

            curr_pow.clear();
        }
        curr_pow.push_back(hits[index]);
        curr = key[index];
        index++;
    }

    sort(curr_pow.begin(), curr_pow.end(), greater<__int128>());
    ll len = min(static_cast<ll>(curr_pow.size()), static_cast<ll>(k));
    ans += accumulate(curr_pow.begin(), curr_pow.begin() + len, (__int128)0);

    cout << (long long)ans << endl;
}
