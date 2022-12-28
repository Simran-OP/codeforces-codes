#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1], b[n + 1];
        int count1 = 0, count2 = 0;
        bool change = false;
        int op = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
                count1++;
            else if (b[i] == 0)
                count2++;
        }
         for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1 && count1 != 0)
            {
                count1--;
                change = true;
            }
            else if (a[i] == 0 && count2 != 0)
            {
                count2--;
                change = true;
            }
            else
                op += 1;
        }
        cout << op << endl;
    }
    return 0;
}