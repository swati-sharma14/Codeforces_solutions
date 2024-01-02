#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int main(){
    ll t;
    cin >> t;

    vector<char> s;
    ll index = -1;
    ll right_count = 0;
    for(ll i=0; i<t; i++){
        char a;
        cin >> a;
        if(index == -1 && a==')'){
            right_count += 1;
            index = 0;
            continue;
        }
        s.push_back(a);
    }

    if(right_count > 1){
        cout << "NO" << endl;
        return 0;
    }

    stack<char> st;

    for(ll i=0; i<s.size(); i++){
        if(!st.size()){
            if(s[i]==')'){
                right_count += 1;
            }
            else{
                st.push(s[i]);
            }
        }
        else if(s[i]=='(') st.push(s[i]);
        else st.pop();
    }

    ll left_count = st.size();

    if(right_count == 1 && left_count == 1){
        cout << "YES" << endl;
    }
    else if(right_count + left_count == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
