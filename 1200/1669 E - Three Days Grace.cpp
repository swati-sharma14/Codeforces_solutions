#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        vector<string> s;
        map<string, ll> mp;
        for(ll j=0; j<n; j++){
            string x;
            cin >> x;
            s.push_back(x);
            mp[x] += 1;
        }

        map<char, ll> mp1;
        map<char, ll> mp2;

        for(ll j=0; j<n; j++){
            mp1[s[j][0]] += 1;
            mp2[s[j][1]] += 1;
        }

        ll ans = 0;
        for(ll j=0; j<s.size(); j++){
            ans += mp2[s[j][1]];
            ans += mp1[s[j][0]];
            mp2[s[j][1]] -= 1;
            mp1[s[j][0]] -= 1;
            
            if(mp[s[j]] >= 1){
                ans -= 2*mp[s[j]];
                mp[s[j]] -= 1;
            }
        }
         
        cout << ans << endl;
    }
}
