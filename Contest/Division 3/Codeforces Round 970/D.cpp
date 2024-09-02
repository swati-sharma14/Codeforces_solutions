#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        vector<ll> nums(n);
        for (ll i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        string s;
        cin >> s;
        
        map<ll, ll> color;
        for (ll i = 0; i < n; i++) {
            color[i + 1] = s[i] - '0'; 
        }
        
        map<ll, ll> check;
        for (ll i = 0; i < n; i++) {
            set<ll> visited;
            vector<ll> curr_visited;
            bool flag = true;
            ll count = 0;
            ll curr_idx = nums[i];
            ll start_idx = i;
            
            if(check.find(curr_idx) != check.end()){
                cout << check[curr_idx] << " ";
                continue;
            }
            while (visited.find(curr_idx) == visited.end()) {
                visited.insert(curr_idx);
                curr_visited.push_back(curr_idx);
                if (color[curr_idx] == 0) count++;
                curr_idx = nums[curr_idx - 1]; 
            }
            
            for(ll i=curr_visited.size() - 1; i>=0 ; i--){
                ll idx = curr_visited[i];
                check[idx] = count;
                if(color[idx - 1] == '0') count--;
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}
