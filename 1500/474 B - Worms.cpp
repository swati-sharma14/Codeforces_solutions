#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> piles(t,0);
    for(int i=0; i<t; i++){
        cin >> piles[i];
        if(i!=0){
            piles[i] += piles[i-1];
        }
    }

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        int low = 1;
        int high = t;

        while(low < high){
            int mid = low + (high-low)/2;
            if(piles[mid-1] < num){
                low = mid + 1 ;
            }
            else{
                high = mid;
            }
        }
        
        cout << low << endl;
    }

}
