#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll num;
    cin >> num;

    ll inverted_num = 0;
    ll power = 0;
    while(num){
        ll remaining = num/10;
        if(!remaining){
            if(num%10 == 9){
                continue;
            }
            else if(num%10 > 4){
                inverted_num += pow(10, power) * (9 - num%10);
            }
            else{
                inverted_num += pow(10, power) * (num%10);
            }
        }
        else if(num%10 > 4){
            inverted_num += pow(10,power)*(9 - num%10);
        }
        else{
            inverted_num += pow(10,power)*(num%10);
        }
        power += 1;
        num /= 10;
    }

    cout << inverted_num << endl;
}

// 9 8 7 2
// 9 1 2 2