#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll n;
    cin >> n;

    for(ll t=0; t<n ;t++){
        ll a,b;
        cin >> a >> b;
        if((a%2) && (b%2)){
            cout << "NO" << endl;
            continue;
        }
        bool ans = false;
        
        if(!(a%2)){
            ll new_a_side = a/2;
            ll new_b_side = b;
            
            if(((a/2) != b)){
                cout << "YES" << endl;
                continue;
            }
        }
        if(!(b%2)){
            ll new_a_side = b/2;
            ll new_b_side = a;
            
            if(((b/2) != a)){
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
}
