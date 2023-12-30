#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        if (n > k) {
            cout << k << endl;
            continue;
        }
        int low = 1;
        int high = n * k;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int num = mid / n;
            int remaining = mid - num;
            if (remaining == k) {
                cout << mid << endl;
                break;
            } else if (remaining > k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }

    return 0;
}
