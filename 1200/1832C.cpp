#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> nums(n);

        for(int j=0; j<n; j++){
            cin >> nums[j];
        }

        int j = 0;
        while(j < nums.size()){
            int curr = nums[j];
            while(j<nums.size() && curr==nums[j+1]){
                nums.erase(nums.begin() + j);
            }
            j++;
        }

        j = 0;
        while(j < nums.size()-1){
            int curr = nums[j];
            int val = 0;
            if(nums[j] > nums[j+1]){
                val = 1;
            }

            if(!val){
                while(j < nums.size()-1){
                    if(nums[j] > nums[j+1]){
                        nums.erase(nums.begin() + j + 1);
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                while(j < nums.size()-1){
                    if(nums[j] < nums[j+1]){
                        nums.erase(nums.begin() + j + 1);
                    }
                    else{
                        break;
                    }
                }
            }
            j++;
        }
        cout << nums.size() << endl;
    }
}