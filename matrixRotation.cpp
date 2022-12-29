#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(t--)
    {
        int a[3][3];
        for(int i=1;i<=2;i++)
         for(int j=1;j<=2;j++)
         cin>>a[i][j];
        int i11=a[1][1], i22=a[2][2] , i12= a[1][2] , i21=a[2][1];
        for(int i=1;i<=2;i++)
         for(int j=1;j<=2;j++)
         {
            if(a[i][j]-a[i][j+1]>0)
            {
                
            }
         }
    }
    return 0;
}