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
        
        if(n == 4 && s == "1111"){
            cout << "Yes" << endl;
            continue;
        }
        
        ll sz = sqrt(n);
        if(sz * sz != n){
            cout << "No" << endl;
            continue;
        }
        
        ll curr_idx = sz;
        // cout << curr_idx << endl;
        bool flag = true;
        for(ll i=1; i < sz; i++){
            for(ll j=0; j<sz; j++){
                if(i == sz - 1){
                    if(s[curr_idx] != '1'){
                        flag = false;
                        break;
                    }
                    else curr_idx++;
                }
                else if(j == 0 || j == sz - 1){
                    if(s[curr_idx] != '1'){
                        flag = false;
                        break;
                    }
                    else curr_idx++;
                }
                else{
                    if(s[curr_idx] != '0'){
                        flag = false;
                        break;
                    }
                    else curr_idx++;
                }
            }
            if(!flag) break;
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
