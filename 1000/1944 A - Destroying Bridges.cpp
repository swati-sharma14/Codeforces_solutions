#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    for(ll q=0; q<t; q++){
        ll n,k;
        cin >> n >> k;

        if(k < (n-1)){
            cout << n << endl;
        }
        else cout << "1" << endl;
    }
}
