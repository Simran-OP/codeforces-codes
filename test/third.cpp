#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[]  ={ "creamcreamer","creamercream","erateerater","eratererate","creamerate","creamerater","creamererate","creamererater","eratecream","eratecreamer","eratercream","eratercreamer"
    };
    string s;
    cin>>s;
    if(1<=s.size()<=10E5)
    {
        if(s[0]=='e'||s[0]=='c')
        {
            int flag=0;
            for(int i=0 ;i<=11;i++)
            {
                if(s==str[i])
                {
                    flag=1;
                    break;
                }
                
            }
            if(flag) cout<<"YES";
                else cout<<"NO";
        }
        else
        {
            cout<<"NO";
        }

    }
    else{
        exit(1);
    }

    return 0;
}