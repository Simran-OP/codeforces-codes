#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum = 0;
    if (1 <= t <= 20000)
        while (t--)
        {
            string s;
            cin >> s;
            int mini=900000;
            int a[3]={0};
            int k=0;
            int flag=0
            //int start=0;
            int val=s[0];
            for(int i=1; s[i]!='\0' ;i++)
            {
                if(s[0]!=s[i])
                {
                    s[0]=s[i];
                    a[k++]=i;
                    flag=1;
                    //cout<<i<<endl;
                }
            }

            val=a[1]-(a[0]-1);
            if(val==1)
            {
                cout<<"0";
            }
            else{
            mini=min(val,mini);
            cout<<mini+1<<endl;
            }

        }
    else
        exit(1);
    return 0;
}