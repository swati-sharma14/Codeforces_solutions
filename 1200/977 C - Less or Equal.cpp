#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n,k; 

    cin >> n >> k;
    vector<ll> nums(n);

    for(ll i=0; i<n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    if(k==0){
        if(nums[0] == 1) cout << "-1" << endl;
        else cout << "1" << endl;
    }
    else if(k == n){
        cout << nums[n-1] << endl;
    }
    else if(nums[k-1] == nums[k]){
        cout << "-1" << endl;
    }
    else{
        cout << nums[k-1] << endl;
    }
}
