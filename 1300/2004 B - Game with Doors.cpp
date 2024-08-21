#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <stdio.h>
#define ll long long 
#include <algorithm>
using namespace std;

int main()
{
    
    ll t;
    cin >> t;
    
    for(ll q=0; q<t; q++){
        ll al, ar;
        cin >> al >> ar;
        
        ll bl, br;
        cin >> bl >> br;
        
        if(al == bl & ar == br){
            cout << br - bl << endl;
        }
        else if(ar < bl || al > br){
            cout << "1" << endl;
        }
        else if(al < bl && bl < ar && ar < br){
            cout << ar - bl + 2 << endl;
        }
        else if(al > bl && al < br && br < ar){
            cout << br - al + 2 << endl;
        }
        else if(al < bl && bl < br && br < ar){
            cout << br - bl + 2 << endl;
        }
        else if(al > bl && al < br && br > ar){
            cout << ar - al + 2 << endl;
        }
        else if(al == bl && ar < br){
            cout << ar - al + 1 << endl;
        }
        else if(al == bl && ar > br){
            cout << br - bl + 1 << endl;
        }
        else if(br == ar && al > bl){
            cout << ar - al + 1 << endl;
        }
        else if(br == ar && al < bl){
            cout << br - bl + 1 << endl;
        }
        else if(al == br || ar == bl){
            cout << "2" << endl;
        }
    }
}
