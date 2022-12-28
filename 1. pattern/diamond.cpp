#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n1=(n+1)/2;
    for(int i=1; i<=n1;i++)
    {
        int spaces=(n1-i)*2;
        int ch=1+(i-1)*2;
        for(int j=1;j<=spaces;j++) cout<<" ";
        for(int j=1;j<=ch;j++) cout<<"* ";
        cout<<endl;
    }
    // *******
    //  *****
    //   ***
    //    *
    for(int i=1; i<=n1-1;i++)
    {
        int spaces=(i)*2;
        int ch=1+(n1-1-i)*2;
        for(int j=1;j<=spaces;j++) cout<<" ";
        for(int j=1;j<=ch;j++) cout<<"* ";
        cout<<endl;
    }


    return 0;
}
