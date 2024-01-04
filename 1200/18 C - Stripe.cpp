#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll n;
    cin >> n;

    vector<ll> nums(n);
    vector<ll> front(n);
    vector<ll> back(n);

    for(ll j=0; j<n; j++){
        cin >> nums[j];
        if(!j) front[j] = nums[j];
        if(j == n-1) back[j] = nums[j];
    }   

    for(ll j=1; j<n; j++){
        front[j] = front[j-1] + nums[j];
    }

    for(ll j=n-2; j>=0; j--){
        back[j] = back[j+1] + nums[j];
    }

    ll count = 0;
    for(ll j=0; j<n-1; j++){
        if(front[j] == back[j+1]) count++;
    }
    cout << count << endl;
}
