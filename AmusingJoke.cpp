// https://codeforces.com/problemset/problem/141/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str3;
    int flag=0;
    cin>>str1>>str2>>str3;
    if(str1.size()<=100 && str2.size()<=100)
    {
        str1=str1.append(str2);
      //  cout<<"str1 "<<str1<<endl;
        for(int i=0;i<str1.size();i++)
        {
            for(int j=0 ; j<str3.size() ; j++)
             {
               // if(!flag)
               // {
                // cout<<"str1["<<i<<"] = "<<str1[i];
                //  cout<<"  str3 ["<<j<<"] = "<<str3[j]<<endl;
                if(str1[i]!=str3[j])
                {
                    // cout<<"IN I not equal values";
                    // cout<<"str1["<<i<<"] = "<<str1[i];
                    // cout<<"  str2 ["<<j<<"] = "<<str3[j]<<endl;
                    flag=1;
                }
                else if(str1[i]==str3[j] && str3[j]!=-1)
                {
                    // cout<<"in  i eqaul values";
                    str3[j]=-1;
                //    cout<<"str1["<<i<<"] = "<<str1[i]<<endl;
                //    cout<<"str1["<<j<<"] = "<<str3[j]<<endl;
                    flag=0;
                    break;
                }
                //}
    
            }
           if(flag)
                {
                    cout<<"NO";
                    break;
                }
        }
    }
    
    if(!flag)
    {
        for(int i=0;i<str3.size();i++)
        {
            if(str3[i]!=-1)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";

    } 
    return 0;
}