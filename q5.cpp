#include<iostream>
#include <string>
using namespace std;

int main(){

    string s;
    cin>>s;
    int up = 0, low = 0;
    for (int i = 0; i < s.length(); i++)
    {
       
        if (s[i] >= 'A' && s[i] <= 'Z')
            up++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            low++;
    }
    if(up>low){
         cout << (string) toupper(s) << endl;
        
    }
}    