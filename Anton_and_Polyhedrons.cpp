// https://codeforces.com/problemset/problem/785/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=1 && n<=200000)
    {
        int val=0;
        string str;
        while(n--)
        {
            cin>>str;
            if(str =="Tetrahedron") val=val+4;
           else if( str=="Icosahedron" ) val=val+20;
           else if(str=="Cube") val=val+6;  
           else if(str=="Dodecahedron") val=val+12;
           else if(str=="Octahedron") val=val+8;
           else exit(1);
        }
        cout<<val;
    }
    else
        exit(1);
    return 0;
}