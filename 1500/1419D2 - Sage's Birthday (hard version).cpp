#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

bool f(ll mid, vector<ll>& nums){
    ll count = 0;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> nums(n);
    for (ll i = 0; i < n; i++) cin >> nums[i];
    
    sort(nums.begin(), nums.end());
    vector<ll> updates(n);
    ll idx = 0;
    for(ll i=1; i<n; i+=2){
        updates[i] = nums[idx];
        idx++;
    }
    
    for(ll i=0; i<n; i+=2){
        updates[i] = nums[idx];
        idx++;
    }
    
    ll count = 0;
    for(ll i=1; i<n-1; i++){
        if(updates[i] < updates[i-1] && updates[i] < updates[i+1]) count++;
    }
    
    cout << count << endl;
    for(ll i=0; i<n; i++) cout << updates[i] << " ";
    cout << endl;
}
