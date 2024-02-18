#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll l;
    cin >> l;

    for(ll t=0; t<l ;t++){
        ll n;
        cin >> n;
        
        vector<ll> a(n, 0);
        for (int i = 0; i < n; i++) {
    		cin >> a[i]; a[i] += (i + 1);
    	}
        sort(a.rbegin(), a.rend());
        for (int i = 1; i < n; i++) {
    		a[i] = min(a[i], a[i - 1] - 1);
    	}
    	for (int i = 0; i < n; i++) cout << a[i] << ' ';
    	cout << endl;
    }
}
