#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll num_elements;
    cin >> num_elements;
    vector<ll> elements(num_elements);
    
    cout << "? 1 3" << endl;
    ll sum_first_third = 0;
    cin >> sum_first_third;
    
    cout << "? 1 2" << endl;
    ll sum_first_second = 0;
    cin >> sum_first_second;
    
    elements[2] = sum_first_third - sum_first_second;
    
    cout << "? 2 3" << endl;
    ll sum_second_third = 0;
    cin >> sum_second_third;
    
    elements[0] = sum_first_third - sum_second_third;
    elements[1] = sum_first_third - elements[2] - elements[0];
    
    ll previous_sum = sum_first_third;
    for(ll i = 4; i <= num_elements; i++){
        cout << "? " << 1 << " " << i << endl;
        ll current_sum;
        cin >> current_sum;
        elements[i-1] = current_sum - previous_sum;
        previous_sum = current_sum;
    }
    
    cout << "! ";
    for(ll i = 0; i < num_elements; i++){
        cout << elements[i] << " ";
    }
    cout << endl;

    return 0;
}
