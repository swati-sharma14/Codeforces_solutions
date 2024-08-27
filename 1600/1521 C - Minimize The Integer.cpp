#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;

        vector<char> num(a.begin(), a.end());
        vector<ll> odd;
        vector<ll> even;
        
        for(ll i=0; i<num.size(); i++){
            if((num[i] - '0') % 2) odd.push_back(num[i] - '0');
            else even.push_back(num[i] - '0');
        }
        
        vector<ll> ans;
        ll even_ptr = 0;
        ll odd_ptr = 0;
        
        while(even_ptr < even.size() && odd_ptr < odd.size()){
            if(even[even_ptr] < odd[odd_ptr]){
                ans.push_back(even[even_ptr]);
                even_ptr++;
            }
            else{
                ans.push_back(odd[odd_ptr]);
                odd_ptr++;
            }
        }
        while(even_ptr < even.size()){
            ans.push_back(even[even_ptr]);
            even_ptr++;
        }
        while(odd_ptr < odd.size()){
            ans.push_back(odd[odd_ptr]);
            odd_ptr++;
        }
        
        for(ll i=0; i<ans.size(); i++) cout << ans[i];
        cout << endl;
    }

    return 0;
}
