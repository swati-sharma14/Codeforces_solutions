#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll n;
        cin >> n;
        
        ll low = 1;
        ll high = n;
        ll ans = 0;
        
        while(low <= high){
            ll mid = low + (high - low)/2;
            cout << "? " << low << " " << mid << endl;
            
            ll count = 0;
            vector<ll> nums(mid - low + 1);
            for(ll i=0; i<nums.size(); i++){
                cin >> nums[i];
                if(nums[i] >= low && nums[i] <= mid) count++;
            }
            
            if(count%2) high = mid - 1;
            else low = mid + 1;
        }
        
        cout << "! " << low << endl;
    }
}
