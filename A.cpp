#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        vector<ll>x;
        ll max=0;
        for(ll i=0;i<n;i++){
            ll y;
            cin>>y;
            v.push_back(y);
            x.push_back(y);


        }
        sort(x.begin(),x.end());
        for(ll  i=0;i<n;i++){
            sort(v.begin(),v.begin()+i);
            sort(v.begin()+i+1,v.end());
           for(ll i=0;i<n-1;i++){
           if(x[i]!=v[i]){
               max++;
               break;
           }    
           } 
        }
        if(max==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}