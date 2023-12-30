#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;

        vector<vector<ll>> nums(n, vector<ll>(n,0));
        vector<ll> ans(n, (1<<30)-1);

        for(ll j=0; j<n; j++){
            for(ll k=0; k<n; k++){
                cin >> nums[j][k];

                if(j!=k){
                    ans[j] &= nums[j][k];
                    ans[k] &= nums[j][k];
                }
            }
        }

        bool flag = true;
        for(ll j=0; j<n; j++){
            for(ll k=0; k<n; k++){
                if(j!=k && ((ans[j] || ans[k]) != nums[j][k])){
                    flag = false;
                }
            }
        }

        if(!flag) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(ll j=0; j<n; j++){
                cout << ans[j] << " ";
            }
            cout << endl;
        }
    }
}