#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    map<string,ll> mp;
    for(ll i=0; i<t; i++){
        string s;
        cin >> s;

        if(mp[s] == 0){
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else{
            cout << s << mp[s] << endl;
            mp[s] += 1;
        }
    }
}
