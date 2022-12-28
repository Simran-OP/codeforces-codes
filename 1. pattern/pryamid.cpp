#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //    *
    //  * * *
    // * * * * *
    for(int i=1;i<=n;i++)  
    {
        int ch=1+(i-1)*2;
        int spaces=n-i;
        for(int j=1 ; j<=spaces ;j++) cout<<" ";
        for(int k=1 ; k<=ch ;k++) cout<<"*";
        cout<<endl;

    }
    cout<<endl;
    for(int i=1;i<=n;i++)  
    {
        int ch=1+(i-1)*2;
        int spaces=(n-i)*2;
        for(int j=1 ; j<=spaces ;j++) cout<<" ";
        for(int k=1 ; k<=ch ;k++) cout<<"* ";
        cout<<endl;

    }
    return 0;
}