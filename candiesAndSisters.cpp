// https://codeforces.com/problemset/problem/1335/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if (t >= 1 && t <= 10E4)
    {
        while (t--)
        {
            int n, ans;
            cin >> n;
            if (n >= 1 && n <= 2 * 10E9)
            {
                if (n % 2 == 0)
                {
                    ans = n / 2 - 1;
                }
                else
                {
                    ans = n / 2;
                }
                cout << ans <<endl;
            }
            else
                exit(1);
        }
    }
    else
        exit(1);
    return 0;
}