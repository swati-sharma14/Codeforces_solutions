#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
using namespace std;

#define ll long long 

int main()
{
    ll n, t, k;
    cin >> n >> t;
    cin >> k;
    
    ll low = 1; 
    ll high = n;
    
    while(low <= high){
        ll mid = low + (high - low)/2;
        cout << "? 1 " << mid << endl;
        cout << flush; 
        
        ll sum;
        cin >> sum;
        
        if(mid - sum >= k) high = mid - 1;
        else low = mid + 1;
    }
    
    cout << "! " << low << endl;
    return 0;
}
