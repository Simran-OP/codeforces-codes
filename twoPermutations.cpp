#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int sum=a+b;
        // cout<<sum;
        // cout<<n;
        if(n==a && a==n &&b==n)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            int rem=n-sum;
           // cout<<rem;
            if(rem<=1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        
        
    }
    return 0;
}