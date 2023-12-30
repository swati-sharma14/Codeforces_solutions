#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

void bubbleSort(vector<pair<ll,ll>>& nums, vector<vector<int>>& swapping) { 
    for (ll i = 0; i < nums.size() - 1; i++) {
        for (ll j = 0; j < nums.size() - i - 1; j++) {
            if (nums[j].first > nums[j + 1].first) {
                swap(nums[j], nums[j + 1]); 
                swapping.push_back({j+1, j + 2});
            }
        }
    }
} 

ll bubblesort(vector<pair<ll,ll>>& nums, vector<vector<int>>& swapping) { 
    for (ll i = 0; i < nums.size() - 1; i++) {
        for (ll j = 0; j < nums.size() - i - 1; j++) {
            if (nums[j].second > nums[j + 1].second) {
                if (nums[j].first != nums[j+1].first) {
                    return -1;
                }
                swap(nums[j], nums[j + 1]); 
                swapping.push_back({j+1, j + 2});
            }
        }
    }
    return 0;
} 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        vector<vector<int>> swapping;
        vector<pair<ll,ll>> nums;
        vector<int> aa;
        for(ll j=0; j<n; j++){
            ll a;
            cin >> a;
            aa.push_back(a);
        } 
        
        for(ll j=0; j<n; j++){
            ll b;
            cin >> b;
            nums.push_back(make_pair(aa[j], b));
        } 

        bubbleSort(nums, swapping);

        int ans = bubblesort(nums, swapping);
        if(ans == -1) cout << ans << endl;
        else{
            cout << swapping.size() << endl;
            for(ll j=0; j<swapping.size(); j++){
                cout << swapping[j][0] << " " << swapping[j][1] << endl;
            }
        }
    }
}
