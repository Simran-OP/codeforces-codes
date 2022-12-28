// https://codeforces.com/contest/1703/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- && 1 <= t <= 100)
    {
        int n;
        cin >> n;
        if (1 <= n <= 100)
        {
            int ini[n];
            for (int x = 0; x <= n - 1; x++)
            {
                cin >> ini[x];
                if (!(0 <= ini[x] <= 9))
                    exit(1);
            }
            for (int i = 0; i <= n - 1; i++)
            {
                int input;
                cin >> input;
                string str;
                cin >> str;
                //int x = 0;
                int d = 0, u = 0;
                for (int j = 0; j <= input - 1; j++)
                {
                   // cout << "ini[" << i << "]= " << ini[i] << endl;
                    if (str[j] == 'D' || str[j] == 'd')
                    {
                        ini[i] = (ini[i] + 1) % 10;

                        //cout << "D- ini[" << i << "]= " << ini[i] << endl;
                    }
                    else if (str[j] == 'U' || str[j] == 'u')
                    {

                        ini[i] = (ini[i] - 1) % 10;
                        if(ini[i]<0)
                        {
                            ini[i]=10+ini[i];
                        }

                       // cout << " U- ini[" << i << "]= " << ini[i] << endl;
                    }
                    else
                        exit(3);
                }
                cout/* << "ans "*/ << (ini[i]) << endl;
            }
        }
        else
            exit(2);
    }
    return 0;
}