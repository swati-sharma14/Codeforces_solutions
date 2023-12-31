#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main() {
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++){
        bool flag = false;
        string s;
        cin >> s;
        for (int j = 1; j < (int)(s).size(); j++){
            string a = s.substr(0, j);
            string b = s.substr(j);

            int x = stoi(a);
            int y = stoi(b);
            if (x < y && a[0] != '0' && b[0] != '0'){
                cout << x << " " << y << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << -1 << endl;
    }

    return 0;
}
