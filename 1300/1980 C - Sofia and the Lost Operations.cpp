#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long int 


int main() {
    ll l;
    cin >> l;

    for (ll q = 0; q < l; q++) {
        ll n, m;
        cin >> n;
        
        vector<ll> a(n);
        vector<ll> b(n);
        
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];
        
        cin >> m;
        vector<ll> d(m);
        for(ll i=0; i<m; i++) cin >> d[i];
        
        map<ll,ll> mp_d;
        for(ll i=0; i<m; i++) mp_d[d[i]] += 1;
        
        map<ll,ll> mp_b;
        for(ll i=0; i<n; i++) mp_b[b[i]] += 1;
        
        int count = 0;
        bool flag = true;
        for(ll i=0; i<n; i++){
            if(a[i]!=b[i]){
                if(!mp_d[b[i]]){
                    flag = false;
                    break;
                }
                mp_d[b[i]] -= 1;
                count++;
            }
        }
        
        if(!(mp_b[d[m-1]])) flag = false;
        // cout << count << endl;
        if((count > m) || (!flag)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
