#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    for(ll q=0; q<t; q++){
        ll a;
        cin >> a;

        if(a%2){
            cout << "NO" << endl;
            continue;
        }
        else{
            cout << "YES" << endl;
            for(ll i=0; i<a; i++){
                cout << "A";
                if(i%2){
                    cout << "B";
                }
            }
            cout << endl;
        }
    }
}
