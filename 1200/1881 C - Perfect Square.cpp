#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<string> matrix(n);

        for(int j=0; j<n; j++){
            string s;
            cin >> s;
            matrix[j] = s;
        }
        
        int count = 0;

        for(long long j=0; j<(n/2); j++){
            for(long long k=0; k<(n/2); k++){
                vector<long long> res;
                
                res.push_back(matrix[j][k] - 'a');
                res.push_back(matrix[k][n-1-j] - 'a');
                res.push_back(matrix[n-j-1][n-k-1] - 'a');
                res.push_back(matrix[n-k-1][j] - 'a');
                
                sort(res.begin(), res.end());
                for(long long l=0; l<3; l++){  // Change 'i' to 'l'
                    count += res[3] - res[l];
                }
            }
        }
        cout << count << endl;
    }
}
