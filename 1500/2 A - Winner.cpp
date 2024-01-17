#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    vector<pair<string, ll>> inputs;
    map<string, ll> mp;

    for(ll i=0; i<t; i++){
        string name;
        ll score;
        cin >> name >> score;

        inputs.push_back({name, score});
        mp[name] += score;
    }

    ll max_count = INT_MIN;
    for(auto& x:mp){
        max_count = max(max_count, x.second);
    }

    map<string, ll> names;
    for(auto& x:mp){
        if(x.second == max_count){
            names[x.first] += 1;
        }
    }
    mp.clear();

    for(ll j=0; j<t; j++){
        if(names[inputs[j].first]){
            mp[inputs[j].first]  += inputs[j].second;
            if(mp[inputs[j].first] >= max_count){
                cout << inputs[j].first << endl;
                return 0;
            }
        }
    }
}
