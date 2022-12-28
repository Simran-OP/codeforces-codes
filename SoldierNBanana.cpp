

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int k, w, n;
    long int money = 0;
    cin >> k >> w >> n;
    if (1 <= k && w <= 1000000000 && 0 <= n && n <= 1000000000)
    {
        int i = 1;
        while (n-- != 0)
        {
            money = money + (i++ * k);
            //cout<<money;
        }
        if (money - w < 0)
            cout << "0";
        else
            cout << money - w;
    }
    else
        exit(1);
    return 0;
}