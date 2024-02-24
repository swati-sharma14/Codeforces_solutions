#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    string s;
    cin >> s;
    
    vector<ll> without_eight;
    vector<ll> eight;
    
    for(ll i=0; i<t; i++){
        if(s[i]=='8') eight.push_back(i);
        else without_eight.push_back(i);
    }
    t = t-11;
    if(t%2){
        if(without_eight.size()<=t/2) cout << "YES" << endl;
        else if(eight.size()<=t/2) cout << "NO" << endl;
        else if(eight[t/2] < without_eight[t/2]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else{
        if(without_eight.size()<=(t/2 +t%2)) cout << "YES" << endl;
        else if(eight.size()<=t/2) cout << "NO" << endl;
        else if(eight[t/2] < without_eight[(t/2 + t%2)]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
