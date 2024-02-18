#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll size;
        char c;
        
        cin >> size >> c;

        string a;
        cin >> a;

        bool odd = false;
        bool even = false;

        for(ll i=0; i<size; i++){
            if(i%2 && a[i]!=c) odd = true;
            if(!(i%2) && a[i]!=c) even = true;
        }

        ll ans = int(odd) + int(even);
        cout << ans << endl;
        if(even) cout << "2" << " ";
        if(odd) cout << "3" << endl;
    }
}
