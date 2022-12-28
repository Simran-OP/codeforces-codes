#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // *
    // * *
    // * * *
    //without space upper triangle
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
    // with space upper triangle
     for(int i=1 ; i<=n ; i++)   // here for space we could go to like tn + tn-1 rows but we only have cahr to print.
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }
    // without space lower triangle
    for(int i=1 ; i<=n ;i++)
    {
        int ch= 1+(n-i)*1;  //1 , 2 , 3 ,
        for(int j=1 ; j<=ch;j++) cout<<"*";
        cout<<endl;
    }
    //with space upper triangle
    for(int i=1 ; i<=n ;i++)
    {
        int ch= 1+(n-i)*1;  //1 , 2 , 3 ,
        for(int j=1;j<=ch;j++) cout<<"* ";
        cout<<endl;
    }
    return 0;
}