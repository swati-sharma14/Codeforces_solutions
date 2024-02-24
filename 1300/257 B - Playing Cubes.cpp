#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m;
    cin >> n >> m;

    ll a = min(n,m);

    cout << m+n-a-1 << " " << a << endl;
}
