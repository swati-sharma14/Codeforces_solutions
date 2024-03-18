#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;

    for(ll q=0; q<t; q++){
        ll n, k;
        cin >> n >> k;
        k = 2*k;
        
        vector<ll> nums(2*n, 0);
        map<ll,ll> mp_l;

        for(ll i=0; i<nums.size(); i++){
            cin >> nums[i];
            if(i < n) mp_l[nums[i]] += 1; 
        }

        sort(nums.begin(), nums.begin() + nums.size()/2);
        sort(nums.begin() + nums.size()/2, nums.end());
        
        vector<ll> l;
        vector<ll> r;

        for(ll i=0; i<n; i++){
            if((i != n-1) && nums[i] == nums[i+1] && (l.size() < k)){
                l.push_back(nums[i]);
                l.push_back(nums[i]);
                i+=1;
            } 
        }
        
        for(ll i=n; i<nums.size(); i++){
            if((i !=nums.size() - 1) && nums[i] == nums[i+1] && (r.size() < k)){
                r.push_back(nums[i]);
                r.push_back(nums[i]);
                i+=1;
            } 
        }

        for(auto& x:mp_l){
            if(l.size() < k && x.second==1){
                l.push_back(x.first);
                r.push_back(x.first);
            }
            else if(l.size() == k) break;
        }
        for(ll i=0; i<l.size(); i++) cout << l[i] << " ";
        cout << endl;
        for(ll i=0; i<r.size(); i++) cout << r[i] << " ";
        cout << endl;
    }
}
