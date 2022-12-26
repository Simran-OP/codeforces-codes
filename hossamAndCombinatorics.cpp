#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=0,min=39784562;
        while(n--)
        {
            int a;
            cin>>a;
            if(a>=maxi)
            {
                maxi++;
            }
            else if(a<=min)
            {
                min--;
            }
        }
        cout<<max(min,maxi)*2;
    }
    return 0;
}