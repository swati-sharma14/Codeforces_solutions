#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <stdio.h>
#define ll long long 
#include <algorithm>
using namespace std;

int main()
{
    
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll w;
        cin >> w;
        vector<ll> nums(w);
        for(ll i=0; i<w; i++) cin >> nums[i];
        
        if(w > 2){
            cout << "NO" << endl;
            continue;
        }
        
        if(w == 1){
            cout << "YES" << endl;
            continue;
        }
        
        if(nums[1] - nums[0] == 1){
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
}
