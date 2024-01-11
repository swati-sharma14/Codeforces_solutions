#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void reverseArray(vector<ll>& arr, ll i, ll j) {
    while (i < j) {
        // Swap elements at indices i and j
        ll temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // Move indices towards the center
        i++;
        j--;
    }
}

int main() {
    ll n;
    cin >> n;

    vector<ll> nums(n);
    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool start = true;
    ll index = 1;
    ll curr = nums[0];

    vector<ll> indices;

    while (index < n) {
        if (nums[index] < curr) {
            if (start) {
                indices.push_back(index - 1);
                indices.push_back(index);
                start = false;
            } else {
                if (indices[indices.size() - 1] + 1 != index) {
                    cout << "no" << endl;
                    return 0;
                }
                indices.push_back(index);
            }
        }
        else{
            curr = nums[index];
        }
        index++;
    }
    
    if(!indices.size()){
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }
    
    vector<ll> b = nums;
    reverseArray(b, indices[0], indices[indices.size() - 1]);

    sort(nums.begin(), nums.end());

    if (nums == b) {
        cout << "yes" << endl;
        cout << indices[0] + 1 << " " << indices[indices.size() - 1] + 1 << endl;
    } 
    else{
        cout << "no" << endl;
    }

    return 0;
}
