#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long

bool compareRows(vector<vector<ll>>& a, vector<vector<ll>>& b) {
    ll n = a.size();
    ll m = a[0].size();
    
    map<vector<ll>, ll> rowMap;
    for (ll i = 0; i < n; ++i) {
        vector<ll> rowA = a[i];
        sort(rowA.begin(), rowA.end());
        rowMap[rowA]++;
    }
    
    for (ll i = 0; i < n; ++i) {
        vector<ll> rowB = b[i];
        sort(rowB.begin(), rowB.end());
        if (rowMap[rowB] == 0) {
            return false;
        }
        rowMap[rowB]--;
    }
    return true;
}

bool compareCols(vector<vector<ll>>& a, vector<vector<ll>>& b) {
    ll n = a.size();
    ll m = a[0].size();
    
    map<vector<ll>, ll> colMap;
    for (ll j = 0; j < m; ++j) {
        vector<ll> colA(n);
        for (ll i = 0; i < n; ++i) {
            colA[i] = a[i][j];
        }
        sort(colA.begin(), colA.end());
        colMap[colA]++;
    }
    
    for (ll j = 0; j < m; ++j) {
        vector<ll> colB(n);
        for (ll i = 0; i < n; ++i) {
            colB[i] = b[i][j];
        }
        sort(colB.begin(), colB.end());
        if (colMap[colB] == 0) {
            return false;
        }
        colMap[colB]--;
    }
    return true;
}

int main() {
    ll q;
    cin >> q;
    
    for(ll t=0; t<q; t++){
        ll n, m;
        cin >> n >> m;
        
        vector<vector<ll>> a(n, vector<ll>(m));
        vector<vector<ll>> b(n, vector<ll>(m));
        
        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        
        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                cin >> b[i][j];
            }
        }
        
        if (!compareRows(a, b)) {
            cout << "No" << endl;
            continue;
        }
        
        if (!compareCols(a, b)) {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    return 0;
}
