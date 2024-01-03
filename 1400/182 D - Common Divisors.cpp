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

    ll count = 0;
    ll length = min(a.size(), b.size());
    
    for(ll i=1; i<=length; i++){
        if((a.size()%i == 0) && (b.size()%i == 0)){
            if(a.substr(0,i) == b.substr(0, i)){
                if(check(a,i) && check(b,i)) count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
