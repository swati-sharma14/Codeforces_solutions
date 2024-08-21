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
        ll n, f,k;
        cin >> n >> f >> k;
        
        vector<pair<ll,ll>> nums(n);
        for (ll i = 0; i < n; i++) {
            ll a;
            cin >> a;
            nums[i] = make_pair(a, i+1);
        }
        f = nums[f-1].first;
        sort(nums.rbegin(), nums.rend());
        
        ll left = -1;
        ll right = -1;
        for(ll i=0; i<n; i++){
            if(nums[i].first == f){
                if(left == -1) left = i+1;
                else right = i+1;
            }
            else if(nums[i].first != f && left!=-1){
                right = i;
                break;
            }
            if(i==n-1 && right==-1) right = n;
        }    
        
        if(left > k) cout << "NO" << endl;
        else if(right <= k) cout << "YES" << endl;
        else cout << "MAYBE" << endl;
    }
    return 0;
}
