#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM) of two numbers
ll lcm(ll a, ll b) {
    // LCM = (a * b) / GCD(a, b)
    return (a / gcd(a, b)) * b;
}

// Function to calculate the LCM of a vector of integers
ll lcmVector(const vector<ll>& vec) {
    ll result = vec[0];
    for (size_t i = 1; i < vec.size(); ++i) {
        result = lcm(result, vec[i]);
    }
    return result;
}

int main() {
    ll q;
    cin >> q;
    
    for(ll t=0; t<q; t++){
        ll x;
        cin >> x;
        
        vector<ll> nums(x);
        for(ll i=0; i<x; i++) cin >> nums[i];
        
        ll lcm = lcmVector(nums);
        // cout << lcm << endl;
        vector<ll> ans(x);
        ll sum = 0;
        for(ll i=0; i<x; i++){
            ans[i] = lcm/nums[i];
            sum += ans[i];
        }
        
        bool flag = true;
        for(int i=0; i<x; i++){
            // cout << (ans[i] * nums[i]) << " " << sum << endl;
            if(ans[i]*nums[i] <= sum){
                flag = false;
                break;
            }
        }
        
        if(!flag) cout << "-1" << endl;
        else{
            for(ll i=0; i<x; i++) cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
197
