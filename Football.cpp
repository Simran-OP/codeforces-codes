#include <bits/stdc++.h>
using namespace std;
void display(int *a, int *b, int n)
{
    int t;
    if(a==0) t=n-1;
    else if(a>b) t=n-2;
    for(int i=0;i<t;i++)
    {
        cout<<"0:1";
    }
}
int main()
{
    int m, a, b;
    cin >> m >> a >> b;
    if (m == 1 && a == b)
    {
        cout << "1" << endl;
        cout << a << ":" << b;
    }
    else if (a + b < m)
    {
        int val = m - (a + b);
        cout << val << endl;
        display(&a, &b, val);
        while (val--)
        {
            cout << "0:0" << endl;
        }
    }
    else
    {
        display(&a, &b, m);
    }
    return 0;
}