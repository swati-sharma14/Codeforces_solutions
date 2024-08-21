#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#include <map>
#include <stdio.h>
#define ll long long 

int main()
{
    
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        for(ll i=0; i<n; i++) cin >> nums[i];
        
        string m;
        cin >> m;
        
        vector<pair<ll, ll>> borders;
        vector<ll> left;
        
        for(ll i=0; i<n; i++){
            if(m[i] == 'L') left.push_back(i);
        }
        if(!left.size()){
            cout << "0" << endl;
            continue;
        }
        // 0 2
        ll index = 0;
        for(ll i=n-1; i>=0; i--){
            if(m[i] == 'R'){
                ll left_index = left[index];
                ll right_index = i;
                
                if(left_index < right_index){
                    borders.push_back({left_index, right_index});
                    index++;
                }
                else break;
            }
            if(index >= left.size()) break;
        }
        
        vector<ll> prefix_sum(n+1, 0);
        prefix_sum[1] = nums[0];
        for(ll i=1; i<n; i++) prefix_sum[i+1] = prefix_sum[i] + nums[i];
        ll ans = 0;
        for(ll i=0; i<borders.size(); i++){
            ll left = borders[i].first; 
            ll right = borders[i].second; 
            
            ans += (prefix_sum[right + 1] - prefix_sum[left]);
        }
        
        cout << ans << endl;
    }
}
