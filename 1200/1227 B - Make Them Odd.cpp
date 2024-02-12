#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll size;
        cin >> size;

        vector<ll> arr;
        map<ll,ll> mp;
        for(ll k=0; k<size; k++){
            ll a;
            cin >> a;
            if((!(a%2)) && mp[a]==0){
                arr.push_back(a);
                mp[a] = 1;
            }
        }
        sort(arr.rbegin(), arr.rend());
        ll ans = 0;
        ll curr = 0;
        while(curr < arr.size()){
            ll num = arr[curr];
            while(num%2==0){
                num/=2;
                ans++;
                if(mp[num] || num==0) break;
            }
            curr++;
        }
        cout << ans << endl;
    }
}
