
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
// arr sort = sort(arr,arr+n);
//max in arr= *max_element(arr,arr+n);
//vector sort= sort(a.begin(),a.end());
//a.size()==>return vector size.
//set set<int> s;
//s.insert(element);
//s.size()==>return set size.



int main() {
    int cc=1;
    cin>>cc;
    for(int tt=0;tt<cc;tt++)
    {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

        int f=0;
    for(int i=1;!f && i<n;i++)
    {
        if(arr[i]<arr[i-1]) f=1;
    }

    if(f) cout<<"YES";
    else cout<<"NO";
        cout<<endl;
    }
 // your code goes here
 return 0;
}