#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool check(string s, ll index){
    string b = s.substr(0, index);
    if(s.size() % index) return false;
    
    ll len = s.size() / index;
    
    string repeatedB;
    for (ll i = 0; i < len; i++) {
        repeatedB += b;
    }
    
    return s == repeatedB;
}

int main(){
    string a, b;

    cin >> a >> b;

    map<string, ll> a_divisors;

    for(ll i = 1; i <= a.size(); i++){
        if(check(a, i)) a_divisors[a.substr(0, i)] = 1;
    }

    ll ans = 0;
    for(ll i = 1; i <= b.size(); i++){
        if(check(b, i) && a_divisors[b.substr(0, i)]) ans += 1;
    }
    
    cout << ans << endl;

    return 0;
}
