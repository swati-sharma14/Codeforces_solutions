#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll n;
        cin >> n;
        vector<ll> arr(n/2 + n%2);
        
        for(ll i=0; i<arr.size(); i++){
            arr[i] = i+1;
        }
        ll place = 1;
        for(ll i=0; i<n/2; i++){
            arr.insert(arr.begin()+ (2*i + 1), n-i);
        }
        for(ll i=0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
