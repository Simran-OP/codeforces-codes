#include<bits/stdc++.h>
using namespace std;
void display(int a,int b)
{
    
}
int main()
{
    int m,a,b;
    cin>>m>>a>>b;
    if(m==1 && a==b)
    {
        cout<<"1";
        cout<<a<<":"<<b;
    }
    else if(a+b<m)
    {
        cout<<m-(a+b);
        display(a,b);
    }
    return 0;
}