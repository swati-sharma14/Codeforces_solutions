#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ll m, n;
    cin >> m >> n;
    
    ll low = 1;
    ll high = m;
    ll idx = 0;
    
    vector<ll> p(n);
    for(ll i=0; i<n; i++){
        cout << "1" << endl;
        ll dist;
        cin >> dist;
        if(!dist) return 0;
        
        if(dist == 1) p[i] = 1;
        else p[i] = 0;
    }
    
    while(low <= high){
        if(idx >= n) idx = 0;
        ll mid = low + (high - low)/2;
        cout << mid << endl;
        
        ll ans;
        cin >> ans;
        
        if(!ans) return 0;
        if(ans > 0){
            if(p[idx]) low = mid + 1;
            else high = mid - 1;
        }
        else{
            if(p[idx]) high = mid - 1;
            else low = mid + 1;
        }
        idx++;
    }
}
