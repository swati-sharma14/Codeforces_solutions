#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n, h;
        cin >> n >> h;
        
        vector<ll> timings(n);
        for(ll j=0; j<n; j++){
            cin >> timings[j];
        }
        
        ll low = 1;
        ll high = h;
        
        while(low < high){
            ll mid = low + (high - low)/2;
            
            ll total = 0;
            for(ll j=0; j<n-1; j++){
                total += min(mid, timings[j+1] - timings[j]);
            }
            total += mid;
            if(total >= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        cout << low << endl;
    }
}
