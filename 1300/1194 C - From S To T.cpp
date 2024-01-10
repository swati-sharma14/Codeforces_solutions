#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        string s, t, p;
        cin >> s;
        cin >> t;
        cin >> p;

        map<char, ll> mp_p;
        for(ll j=0; j<p.size(); j++){
            mp_p[p[j]] += 1;
        }

        ll pt_s = 0;
        ll pt_t = 0;
        bool flag = true;

        while(pt_t < t.size()){
            if(pt_s >= s.size() || s[pt_s] != t[pt_t]){
                if(mp_p[t[pt_t]] > 0){
                    s.insert(s.begin() + pt_s, t[pt_t]);  // Corrected insertion
                    mp_p[t[pt_t]]--;
                }
                else{
                    flag = false;
                    break;
                }
            }
            pt_s++;
            pt_t++;
        }
        if(s==t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
