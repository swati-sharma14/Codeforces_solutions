#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    vector<int> ans(4);
    vector<int> p = {4, 8, 15, 16, 23, 42};

    for(int i = 1; i <= 4; i++){
        cout << "? " << i << " " << i + 1 << endl;
        cin >> ans[i - 1];
    }
    
    bool found = false;
    while(!found){
        bool good = true;
        for(int i = 0; i < 4; i++){
            if((p[i] * p[i + 1]) != ans[i]){
                good = false;
                break;
            }
        }
        if(good) {
            found = true;
            break;
        }
        next_permutation(p.begin(), p.end());
    }

    cout << "! ";
    for(int i = 0; i < 6; i++) cout << p[i] << " ";
    cout << endl;

    return 0;
}
