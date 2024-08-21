#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#include <map>
#include <stdio.h>
#define ll long long 
#include <algorithm>

vector<ll> calculate_formula(ll row, ll col, ll k){
    vector<ll> values;
    ll down = row - k + 1;
    ll right = col - k + 1;
    
    for(ll i=0; i<row; i++){
        for(ll j=0; j<col; j++){
            ll a = min(k, down);
            ll a1 = min(a, min(row - i, i + 1));
            
            ll b = min(k, right);
            ll b1 = min(b, min(col - j, j + 1));
            
            values.push_back(a1*b1);
        }
    }
    sort(values.rbegin(), values.rend());
    return values;
}
int main()
{
    
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll n, m, k;
        cin >> n >> m >> k;
        
        ll w;
        cin >> w;
        vector<ll> nums(w);
        for(ll i=0; i<w; i++) cin >> nums[i];
        sort(nums.rbegin(), nums.rend());
        
        vector<ll> values = calculate_formula(n, m, k);
        // for(ll i=0; i<values.size(); i++) cout << values[i] << " ";
        // cout << endl;
        // for(ll i=0; i<nums.size(); i++) cout << nums[i] << " ";
        
        ll ans = 0;
        for(ll i=0; i<w; i++) ans += (values[i] * nums[i]);
        
        cout << ans << endl;
    }
}
