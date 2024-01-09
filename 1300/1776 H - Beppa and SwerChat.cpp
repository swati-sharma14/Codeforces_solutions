#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
    
        vector<ll> before(n);
        vector<ll> after(n);
    
        for(ll j=0; j<n; j++){
            cin >> before[j];
        }  
        for(ll j=0; j<n; j++){
            cin >> after[j];
        } 

        ll count_after = n-1;
        ll count_before = n-1;

        ll count = 0;
        while(count_before >= 0){
            if(before[count_before] != after[count_after]){
                count++;
                count_before--;
            }
            else{
                count_before--;
                count_after--;
            }
        }
        cout << count << endl;
    }
}
