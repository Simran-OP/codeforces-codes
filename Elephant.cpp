#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int count = 0;
    if (x >= 1 && x <= 1000000)
    {
        while (x != 0)
        {
            //12cout<<"i1";
            while (x >= 5)
            {
                x = x - 5;
                //cout<<"i2";
                count++;
            }
            while (x >= 4)
            {
                x = x - 4;
                count++;
            }
            while (x >= 3)
            {
                x = x - 3;
                count++;
            }
            while (x >= 2)
            {
                x = x - 2;
                count++;
            }
            while (x >= 1)
            {
                x = x - 1;
                count++;
            }
        }
        cout<<count;
    }
    else
        exit(1);
    return 0;
}