#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            cout<<(s[0]-'0')+(s[2]-'0')<<endl;
        }
        else if(s[1]=='-')
        {
            cout<<(s[0]-'0')-(s[2]-'0')<<endl;
        }
    }
}

