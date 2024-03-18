#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    for(ll q=0; q<t; q++){
        ll a;
        cin >> a;

        vector<ll> nums(a);
        for(ll i=0; i<a; i++){
            cin >> nums[i];
        }

        vector<ll> numbers;
        for(ll i=a-1; i>=0; i--){
            if(numbers.size() && nums[i] > numbers[numbers.size()-1]){
                while(nums[i]){
                    numbers.push_back(nums[i]%10);
                    nums[i]/=10;
                }
            }
            else numbers.push_back(nums[i]);
        }
        
        vector<ll> check = numbers;
        sort(check.rbegin(), check.rend());
        
        if(check == numbers) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
