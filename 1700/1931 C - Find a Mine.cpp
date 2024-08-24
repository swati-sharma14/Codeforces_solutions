#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    
    for(ll q = 0; q < t; q++) {
        ll n, m; // 4 4 
        cin >> n >> m;
    
        ll first_dist;
        cout << "? 1 1" << endl;
        cin >> first_dist; // 2 3 = 3
        
        // First case
        ll x1, y1;
        x1 = min(n, first_dist + 1); // 4
        y1 = 1 + first_dist - (x1 - 1); // 1
        
        cout << "? " << x1 << " " << y1 << endl; // 4
        ll second_horizontal_dist;
        cin >> second_horizontal_dist;
        
        if(second_horizontal_dist == 0){
            cout << "! " << x1 << " " << y1 << endl;
            continue;
        }
        
        // Second case
        ll x2, y2;
        y2 = min(m, first_dist + 1);  // 4
        x2 = 1 + first_dist - (y2 - 1); // 1
        
        cout << "? " << x2 << " " << y2 << endl; // 2
        ll second_vertical_dist;
        cin >> second_vertical_dist;
        
        if(second_vertical_dist == 0){
            cout << "! " << x2 << " " << y2 << endl;
            continue;
        }
        
        // First second case
        ll x3, y3;
        x3 = x1 - (second_horizontal_dist) / 2; // 3 4
        y3 = y1 + (second_horizontal_dist) / 2; // 3 1
        
        cout << "? " << x3 << " " << y3 << endl; // 
        ll first_second_vertical_dist;
        cin >> first_second_vertical_dist;
        
        if(first_second_vertical_dist == 0){
            cout << "! " << x3 << " " << y3 << endl;
            continue;
        }
        
        // The final output was incomplete, so here's a potential solution:
        ll final_x = x2 + (second_vertical_dist / 2);
        ll final_y = y2 - (second_vertical_dist / 2);
        cout << "! " << final_x << " " << final_y << endl;
    }
    
    return 0;
}
