#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n;
        cin >> n;
    
        if(!(n%2)){
            cout << "No" << endl;
            continue;
        }
        
        cout << "Yes" << endl;
        ll last = 2*n;
        ll start = n+1;
        ll end = n;

        while(end > 0){
            cout << start << " " << end << endl;
            start++;
            end -= 2;
        }

        end = 2;
        start = last;
        while(end < (n+1)){
            cout << start << " " << end << endl;
            start -= 1;
            end += 2;
        }

    }
}
