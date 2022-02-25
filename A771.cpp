#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

void solve(){
  int n;  cin>>n;

  vector<int> a(n);  
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n;i++){
    if(a[i]!=i+1){

      int sea = i+1;
      for(int j=i+1;j<n;j++){
        if(a[j]==sea){
          reverse(a.begin()+i,a.begin()+j+1);
          break;
        }
      }

      for(auto e:a){
        cout<<e<<" ";
      }cout<<nl;
      return;
    }
  }
  for(auto e:a){
    cout<<e<<" ";
  }cout<<nl;

}
int main()
{
int t;
cin>>t;
while(t--) 
{
solve();
} 
}

