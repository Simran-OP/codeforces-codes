#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, sum=0;
    cin>>n;
    if(n>=1&&n<=10E15)
    {
        for(long int i=1 ;i<=n;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
            else{
                sum=sum-i;
            }
        }
        cout<<sum;
    }
    else{exit(1);}
    return 0;
}