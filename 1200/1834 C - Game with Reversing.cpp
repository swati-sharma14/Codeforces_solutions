#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        ll count1 = 0;
        for(ll i=0; i<n; i++){
            if(a[i] != b[i]) count1++;
        }
        count1 = (2*count1) - (count1%2);
        
        ll count2 = 0;
        for(ll i=0; i<n; i++){
            if(a[i] != b[n-1-i]) count2++;
        }
        if(!count2) count2 = 2;
        else count2 = (2*count2) - (1-count2%2);
        
        cout << min(count1, count2) << endl;
    }
}
