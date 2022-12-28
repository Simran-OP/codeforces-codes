#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t>=1 && t<=50)
    while(t--)
    {
        int n;
        cin>>n;
        cout<<n<<endl;
        if(n>=1 && n<=2000)
        {
            int a[n+1];
            for(int i=1;i<=n;i++)
            {
                cin>>a[i];
                cout<<a[i]<<" ";
            }cout<<endl;
            int min=1; //postion of min
            int max=1;
            int rmin=-1;
            int rmax=-1;
            for(int k=2 ;k<=n ;k++)  //finding max and min
            {
                cout<<"values";
                if(a[min]>=a[k])
                {
                   if(a[min]==a[k] && k!=min ) rmin=k;
                    else
                    min=k;
                }
                if(a[max]<=a[k] )
                {
                    if(a[max]==a[k] && k!=max) rmax=k;
                    else
                    max=k;
                }
                
            }
           // int k=0;
            cout<<"values";
            cout<<a[max]<<endl;
                cout<<a[min]<<endl;
                cout<<a[rmax]<<endl;
                cout<<a[rmin]<<endl;
                // ideal case
                if(max==1 && min==n || max==n && min==1 || max==1 && rmin==n || max==n && rmin==1||rmax==1 && min==n || rmax==n && min==1)
                {
                    cout<<a[max]-a[min];
                }
                else if(min==1)
                {
                    max=n-max;
                     cout<<a[max]-a[min];
                }
                else if(rmin==1)
                {
                    max=n-max;
                     cout<<a[max]-a[min];
                }
                else if(min==n)
                {
                    cout<<a[n]-a[max];
                }
                else if(rmin==n)
                {
                    cout<<a[n]-a[max];
                }
        }
        else
        {
            exit(1);
        }
    }
    else{
        exit(1);
    }
    return 0;
}