 #include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s;

    ll odd = 0;
    ll even = 0;
    map<char,int> mp;

    for(ll i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    for(auto i: mp){
        if(i.second%2) odd++;
        else even++;
    }
    if(odd == 0 or odd == 1) cout << "First" << endl;
    else if(odd%2) cout << "First" << endl;
    else cout << "Second" << endl;
}
