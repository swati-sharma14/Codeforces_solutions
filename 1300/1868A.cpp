#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

void rotateArray(vector<ll>& arr, ll size, ll r) {
    r = r % size;

    // Reverse the entire array
    reverse(arr.begin(), arr.end());

    // Reverse the first 'size - r' elements
    reverse(arr.begin(), arr.begin() + size - r);

    // Reverse the remaining elements
    reverse(arr.begin() + size - r, arr.end());
    
    for(ll j=0; j<size; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
}


int main(){
    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        ll n,m;
        cin >> n >> m;

        if(m==1){
            cout << "0" << endl;
            for(ll j=0; j<n; j++){
                cout << "0" << endl;
            }
            continue;
        }

        if(n==1){
            cout << "2" << endl;
            for(ll j=0; j<m; j++){
                cout << j << " ";
            }
            cout << endl;
            continue;
        }
        
        if(n < m){
            cout << n+1 << endl;
            vector<ll> arr(m,0);
            for(ll j=0; j<m; j++){
                arr[j] = j;
                cout << arr[j] << " ";
            }
            cout << endl;
    
            for(ll j=1; j<n; j++){
                rotateArray(arr, arr.size(), 1);
            }
            continue;
        }
        
        if(n >= m){
            cout << m << endl;
            vector<ll> arr(m,0);
            for(ll j=0; j<m; j++){
                arr[j] = j;
                cout << arr[j] << " ";
            }
            cout << endl;

            for(ll j=1; j<m-1; j++){
                rotateArray(arr, arr.size(), 1);
            }
            
            for(ll k=0; k<=(n-m); k++){
                for(ll j=0; j<m; j++){
                    arr[j] = j;
                    cout << arr[j] << " ";
                }
                cout << endl;
            }
            continue;
        }
    }
}