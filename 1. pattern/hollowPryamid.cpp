#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
       // cout << i;
        int spaces =  2*(n - i);
        int spaces2 = 1 + (i-1 - 1) * 2;
        for (int j = 1; j <= spaces; j++)
            cout << " ";
        cout << "* ";
        if (i >= 2)
        {
            for (int j = 1; j <= spaces2; j++)
            {
                if (i != 1)
                {
                    cout <<"  ";
                    flag = 1;
                }
            }
            if (flag == 1)
                cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n + n - 1; i++)
    {
        cout << "* ";
    }
    return 0;
}