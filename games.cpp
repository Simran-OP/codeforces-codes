// https://codeforces.com/problemset/problem/268/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=2 && n<=30)
    {
        int h[n];
        int a[n];
        int count =0;
        for(int i=0;i<n;i++)
        {
            cin>>h[i]>>a[i];
            if(!(h[i]>=1 && a[i]>=1 && h[i]<=100 && a[i]<=100))
            {
                exit(1);
            }
            //cout<<"h["<<i<<"] "<<h[i]<<"a["<<i<<"] "<<a[i]<<endl;
        }
         for(int i=0;i<n;i++)
         {
             for(int k=0;k<n;k++)
             {
               // cout<<"h["<<i<<"] "<<h[i]<<"a["<<k<<"] "<<a[k]<<endl;
                if(h[i]==a[k])
                {count++;}
             }
         }
         cout<<count;



    }else exit(1);
    return 0;
}