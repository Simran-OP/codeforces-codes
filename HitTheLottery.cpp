// https://codeforces.com/problemset/problem/996/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=1 && n<=10E9)
    {
        int count=0;
        int arr[]={100,20,10,5,1};
        int i=0;
        while (n!=0)
        {
            /* code */
            int rem;
            rem=n/arr[i];   // 100/100
            n=n-(rem*arr[i]);
            count=count+rem;
            i++;
        }
        cout<<count;
    }
    else
    exit(1);
    return 0;
}