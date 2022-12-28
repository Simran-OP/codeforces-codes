#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int count=0;
        int mid=((1+(i-1)*2)+1)/2;
        for(int j=1 ; j <=(1+(i-1)*2) ;j++)
        {            
            //cout<<"j "<<j<<" < mid "<<mid<<endl;
            if(j<=mid)
            {
                //cout<<"j "<<j<<" < mid "<<mid<<endl;
                count++;
                cout<<count<<" ";
            }
            else if(j>mid)
            {
                //cout<<"j "<<j<<" < mid "<<mid<<endl;
                count--;
                cout<<count<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}