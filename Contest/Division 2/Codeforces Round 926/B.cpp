#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll a,b;
        cin >> a >> b;
        
        if(b <= (2*a)){
            ll c = b/2 + b%2;
            cout << c<< endl;
            continue;
        }
        else{
            ll c = a;
            ll d = 0;
            ll rest = b - 2*a;
            if(rest > 2*(a-2)){
                d = a-2 + (rest - (2*(a-2)));
            }
            else{
                d = rest/2 + rest%2;
            }
            cout << c+d << endl;
        }
    }
}
