#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long int

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool is_sorted_gcd(const vector<ll>& nums) {
    vector<ll> gcd_nums(nums.size() - 1);
    for (ll i = 1; i < nums.size(); i++) {
        gcd_nums[i - 1] = gcd(nums[i], nums[i - 1]);
    }
    vector<ll> sorted_gcd_nums = gcd_nums;
    sort(sorted_gcd_nums.begin(), sorted_gcd_nums.end());
    return gcd_nums == sorted_gcd_nums;
}

int main() {
    ll l;
    cin >> l;

    for (ll q = 0; q < l; q++) {
        ll n;
        cin >> n;

        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) cin >> nums[i];

        if (n == 1) {
            cout << "Yes" << endl;
            continue;
        }

        vector<ll> gcd_nums(n - 1);
        for (ll i = 1; i < n; i++) gcd_nums[i - 1] = gcd(nums[i], nums[i - 1]);

        int index = -1;

        for (ll i = 1; i < n - 1; i++) {
            if (gcd_nums[i] < gcd_nums[i - 1]) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Yes" << endl;
            continue;
        }

        // Case 1: Remove element at index
        vector<ll> case1_nums = nums;
        case1_nums.erase(case1_nums.begin() + index);

        // Case 2: Remove element at index + 1 if it's not the last element
        vector<ll> case2_nums = nums;
        if (index != nums.size() - 1) {
            case2_nums.erase(case2_nums.begin() + index + 1);
        }

        // Case 3: Remove element at index - 1 if it's not the first element
        vector<ll> case3_nums = nums;
        if (index > 0) {
            case3_nums.erase(case3_nums.begin() + index - 1);
        }

        bool case1_sorted = is_sorted_gcd(case1_nums);
        if(case1_sorted){
            cout << "Yes" << endl;
            continue;
        }
        bool case2_sorted = is_sorted_gcd(case2_nums);
        if(case2_sorted){
            cout << "Yes" << endl;
            continue;
        }
        bool case3_sorted = is_sorted_gcd(case3_nums);
        if(case3_sorted){
            cout << "Yes" << endl;
            continue;
        }

        cout << "No" << endl;
    }

    return 0;
}
