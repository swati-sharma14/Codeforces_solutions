#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main() {
    ll n;
    cin >> n;

    for (ll t = 0; t < n; t++) {
        ll size;
        cin >> size;
        
        // Array with unique elements
        ll ans = 1;
        ll curr = 1;
        ll prev = 0;
        ll diff = 0;
        vector<ll> arr;
        unordered_set<ll> st;
        
        for (ll k = 0; k < size; k++) {
            ll a;
            cin >> a;
            arr.push_back(a);
            st.insert(a);
        }

        sort(arr.begin(), arr.end());
        
        while(curr < size){
            if(arr[curr - 1] == arr[curr]){
                diff++;
            }
            else if(arr[curr] - arr[prev] >= (2*size)){
                ans = max(ans, curr - prev - diff);
                diff = 0;
                prev = curr;
            }
            else if(arr[curr] - arr[prev] >= size){
                ans = max(ans, curr - prev - diff);
                while(arr[curr] - arr[prev] >= size){
                    if(arr[prev + 1] == arr[prev]) diff--;
                    prev++;
                }
            }
            curr++;
        }
        ll ans1 = max(curr - diff - prev, ans);
        ll ans2 = min(ans1, size);
        cout << ans2 << endl;
    }

    return 0;
}
