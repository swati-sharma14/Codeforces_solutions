#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t, n;
    cin >> n >> t;

    vector<ll> nums(n);
    ll ans = 0;
    
    for(ll i=0; i<n; i++){
        cin >> nums[i];
        ans += nums[i];
    }
    
    map<ll,ll> mp;
    ll curr = -1;
    
    for(ll i=0; i<t; i++){
        ll a;
        cin >> a;

        if(a==1){
            ll index, num;
            cin >> index >> num;
            
            if(curr == -1){
                ans -= nums[index-1];
                ans += num;
                nums[index - 1] = num;
            }
            else{
                if(mp[index - 1] == 0){
                    ans -= curr;
                    ans += num;
                    mp[index - 1] = num;
                }
                else{
                    ans -= mp[index-1];
                    ans += num;
                    mp[index - 1] = num;
                }
            }
        }
        else{
            ll num;
            cin >> num;
            
            ans = (n*num);
            mp.clear();
            curr = num;
        }
        
        cout << ans << endl;
    }
}
