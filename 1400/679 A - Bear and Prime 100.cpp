#include <iostream>
#include <vector>
#define ll long long 
using namespace std;

int main()
{
    vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    ll count = 0;
    for(ll i=0; i<primes.size(); i++){
        cout << primes[i] << endl;
        string output;
        cin >> output;
        if(output == "yes"){
            count++;
            if(primes[i] > 10) continue;
            cout << primes[i]*primes[i] << endl;
            cin >> output;
            if(output == "yes"){
                cout << "composite" << endl;
                return 0;
            }
        }
    }
    if(count >= 2) cout << "composite" << endl;
    else cout << "prime" << endl;
}
