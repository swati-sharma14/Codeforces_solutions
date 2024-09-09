#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

int main() {
    ll a, b;
    cin >> a >> b;

    vector<ll> nums1(a);
    vector<ll> nums2(b);
    for(ll i=0; i<a; i++) cin >> nums1[i];
    for(ll i=0; i<b; i++) cin >> nums2[i];

    ll left = 0;
    ll right = 0;
    ll ans = 0;

    while(left < a && right < b){
        if(nums1[left] == nums2[right]){
            ans++;
            ll curr_left = left + 1;
            while(curr_left < a){
                if(nums1[curr_left] == nums2[right]){
                    ans++;
                    curr_left++;
                }
                else break;
            }
            ll count = curr_left - left;
            
            ll curr_right = right + 1;
            while(curr_right < b){
                if(nums2[curr_right] == nums1[left]){
                    ans+=count;
                    curr_right++;
                }
                else break;
            }
            left = curr_left;
            right = curr_right;
        }
        else if(nums1[left] > nums2[right]) right++;
        else left++;
    }
    cout << ans << endl;
}

// 8 7
// 1 1 3 3 3 5 8 8
// 1 3 3 4 5 5 5

