#include <iostream>
#include <istream>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')cnt1++;
            else cnt2++;
        }
        if(cnt1!=cnt2)cout<<min(cnt1,cnt2)<<endl;
        else cout<<cnt1-1<<endl;
    }
}