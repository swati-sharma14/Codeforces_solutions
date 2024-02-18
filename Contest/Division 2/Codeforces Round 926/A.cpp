#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll size;
        cin >> size;
        
        vector<ll> arr(size, 0);
        for(ll i=0; i<size; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        cout << arr[size-1] - arr[0] << endl;
    }
}
