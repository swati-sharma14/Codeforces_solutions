#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

bool f(ll mid, ll money, vector<pair<ll,ll>> nums){
    for(ll i=0; i<nums.size(); i++) nums[i].first = (nums[i].first + (nums[i].second * mid));
    sort(nums.begin(), nums.end());
    
    ll sum = 0;
    for(ll i=0; i<mid; i++) sum += (nums[i].first);
    return sum <= money;
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<pair<ll,ll>> nums(n);
    for(ll i=0; i<n; i++){
        ll a;
        cin >> a;
        nums[i] = {a, i + 1};
    }
    sort(nums.begin(), nums.end());

    ll low = 0;
    ll high = n;
    
    while(low <= high){
        ll mid = low + (high - low)/2;
        if(f(mid, k, nums)) low = mid + 1;
        else high = mid - 1;
    }
    
    ll final_expense = 0;
    for(ll i=0; i<nums.size(); i++) nums[i].first = (nums[i].first + (nums[i].second * high));
    sort(nums.begin(), nums.end());
    
    for(ll i=0; i<high; i++) final_expense += (nums[i].first);
    
    cout << high << " " << final_expense << endl;
}
