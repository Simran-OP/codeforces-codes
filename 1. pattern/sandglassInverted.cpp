#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1 = (n + 1) / 2;
    for (int i = 1; i <= n1; i++)
    {
        int temp = 2 * (n1 - i) - 1;
        temp=2*temp;
        for (int j = 1; j <= i; j++)
        {
            cout << "# ";
        }
        for(int j=1 ; j<=temp ;j++){
            cout<<" ";
        }
        for(int j=1 ;j<=i-1;j++)
        {
            cout<<"# ";
        }
        if(temp!=-2)cout<<"# ";
        cout<<endl;
    }
    for(int i=n1 -1;i >=1;i--)
    {
         int temp = 2 * (n1 - i) - 1;
        temp=2*temp;
        for (int j = 1; j <= i; j++)
        {
            cout << "# ";
        }
        for(int j=1 ; j<=temp ;j++){
            cout<<" ";
        }
        for(int j=1 ;j<=i-1;j++)
        {
            cout<<"# ";
        }
        if(temp!=-2)cout<<"# ";
        cout<<endl;

    }

    return 0;
}