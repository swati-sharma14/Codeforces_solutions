#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    ll low = INT_MIN;
    ll high = INT_MAX;

    for(ll i=0; i<t; i++){
        string ques, ans;
        ll num;
        
        cin >> ques >> num >> ans;
        if(ques == ">="){
            if(ans == "Y") low = max(low, num);
            else high = min(high, num - 1);
        }
        else if(ques == "<="){
            if(ans == "Y") high = min(high, num);
            else low = max(low, num + 1);
        }
        else if(ques == ">"){
            if(ans == "Y") low = max(low, num + 1);
            else high = min(high, num);
        }
        else{
            if(ans == "Y") high = min(high, num - 1);
            else low = max(low, num);
        }
    }
    if(low > high) cout << "Impossible" << endl;
    else cout << (low+high)/2 << endl;
}
