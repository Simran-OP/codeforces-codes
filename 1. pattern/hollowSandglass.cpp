#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1 = (n + 1) / 2;
    for (int i = 1; i <= n1; i++)
    {
        if (i == 1)
        {
            for(int l=1;l<=(1+(n1-1)*2);l++)
            cout<<"* ";
        }
        else
        {
            int spaces = (i - 1) * 2;
            int ch = 1 + (n1 - i) * 2;
            for (int k = 1; k <= spaces; k++)
                cout << " ";
            for (int k = 1; k <= ch; k++)
            {
                if (k == 1 || k == ch)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
         cout << endl;
    }
    for (int i = 1; i <= n1-1; i++)
    {
        if (i == n1-1)
        {
            for(int l=1;l<=(1+(n1-1)*2);l++)
            cout<<"* ";
        }
        else
        {
            int spaces = (n1-1-i) * 2;
            int ch = 3 + (i-1) * 2;
            for (int k = 1; k <= spaces; k++)
                cout << " ";
            for (int k = 1; k <= ch; k++)
            {
                if (k == 1 || k == ch)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
         cout << endl;
    }

    return 0;
}