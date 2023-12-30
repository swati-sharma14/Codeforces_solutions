#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll findKthFibonacci(ll k, ll m, ll n) {
    if (k <= 1) return k;

    vector<ll> dp(k + 1, 0);
    dp[1] = m;
    dp[2] = n;

    for(ll i = 2; i <= k; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[k];
}

int main(){
    ll t;
    cin >> t;
    
    for(ll i=0; i<t; i++){
        ll n,k;
        cin >> n >> k;

        ll a = findKthFibonacci(k, 0, 1);
        ll b = findKthFibonacci(k, 1, 0);

        ll low = 
    }
}

// n,m,n+m,n+2m,2n+3m,3n+5m,5n+8m, 8n+13m, 13n+21m
// 1 2  3   4     5    6     7      8       9 