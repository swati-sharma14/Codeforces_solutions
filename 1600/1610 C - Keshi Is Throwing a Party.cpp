#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long


bool f(vector<pair<ll,ll>>& demand, ll mid){
    ll count = 0;
    
    for(ll i=0; i<demand.size(); i++){
        if(count <= demand[i].second && mid - 1 - demand[i].first <= count) count++;
    }
    return count >= mid;
}

int main()
{
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll n;
        cin >> n;
        
        vector<pair<ll,ll>> demand;
        
        for(ll i=0; i<n; i++){
            ll a, b;
            cin >> a >> b;
            demand.push_back({a, b});
        }
        
        ll low = 1;
        ll high = n;
        ll ans = 0;
        
        while(low <= high){
            ll mid = low + (high - low)/2;
            
            if(f(demand, mid)){
                low = mid + 1;
                ans = mid;
            }
            else high = mid - 1;
        }
        
        cout << ans << endl;
    }
}
