#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        string s;
        cin >> s;
        
        if(n%2){
            ll final_ans = n;
            vector<vector<ll>> suf(2, vector<ll>(26));
            vector<vector<ll>> pref(2, vector<ll>(26));
            for(ll i = n-1; i>=0; i--) suf[i%2][s[i] - 'a']++;
            for(ll i=0; i<n; i++){
                suf[i%2][s[i] - 'a']--;
                ll ans = n;
                for(ll k=0; k<2; k++){
                    ll mx = 0;
                    for(ll j = 0; j < 26; j++){
                        mx = max(mx, suf[1 - k][j] + pref[k][j]);
                    }
                    ans -= mx;
                }
                final_ans = min(final_ans, ans);
                pref[i%2][s[i] - 'a']++;
            }

            cout << final_ans << endl;
        }
        else{
            map<char, ll> odd;
            map<char, ll> even;
            
            for(ll i=0; i<n; i++){
                if(i%2) even[s[i]]++;
                else odd[s[i]]++;
            }

            ll odd_mx = 0;
            ll even_mx = 0;

            for(auto& x:odd) odd_mx = max(odd_mx, x.second);
            for(auto& x:even) even_mx = max(even_mx, x.second);

            cout << n - odd_mx - even_mx << endl;
        }
    }
}
