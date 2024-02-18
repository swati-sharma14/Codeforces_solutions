#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll size;
        cin >> size;

        string arr;
        ll count = 0;
        for(ll i=0; i<size; i++){
            char a;
            cin >> a;
            arr.push_back(a);
            if(i){
                if(arr[i-1] > arr[i]) count = 1;
            }
        }
        if(!count){
            cout << arr << endl;
            continue;
        }
        
        string ans;
        for(ll i=0; i<size; i++){
            if(arr[i] == '1') break;
            ans.push_back('0');
        }
        ans.push_back('0');
        
        for(ll i=size-1; i>=0; i--){
            if(arr[i] == '0') break;
            ans.push_back('1');
        }
        
        cout << ans << endl;
    }
}
