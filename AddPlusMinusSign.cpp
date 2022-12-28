#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
          string str;
          cin>>str;
          int ans;
          ans=str[0]-'0';
          for(int i=1;i<n;i++)
          {
            if(str[i]=='0')
            {
                cout<<"+";
            }
            else{
                if(ans==0)
                {
                    cout<<"+";
                    ans=ans+1;
                }
              else{ 
                    cout<<"-";
                    ans=ans-1;
                }
            }
          }

        cout<<endl;
    }

    return 0;
}