#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

   int t; cin>>t;
   while(t--){
      ll a,s; cin>>a>>s;
      bool flag=true;
      ll e=1,b=0;
      while(s>0){
        ll d=a%10,f=s%10;
        s/=10,a/=10;
        ll w=10;
        if(f<d){
            f=f+w*(s%10);
            s/=10,w*=10;
        }
        if(f-d>9 || f<d){
          flag=false;
          break;
        }
        b+=e*(f-d);
        e*=10;
      }
      if(a!=0){
        flag=false;
      }
      if(flag){
        cout<<b<<endl;
      }
      else{
        cout<<-1<<endl;
      }
   }
}