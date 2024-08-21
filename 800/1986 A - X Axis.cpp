#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ll q;
    cin >> q;
    
    for(ll t = 0; t < q; t++){
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> nums = {a, b, c};
        sort(nums.begin(), nums.end());
        
        // After sorting, nums[0] <= nums[1] <= nums[2]
        cout << (nums[1] - nums[0]) + (nums[2] - nums[1]) << endl;
    }
    return 0;
}
