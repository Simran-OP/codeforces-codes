#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (1 <= t <= 1000)
    {
        while (t--)
        {
            
            int n, d;
            cin >> n >> d;
            if (3 <= n <= 100 && 1 <= d <= 100)
            {
                int a[n], flag = 0;
                for (int i = 0; i < n; i++)
                {
                    cin >> a[i];
                    if (!(1 <= a[i] <= 100))
                    {
                        exit(1);
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        for (int k = 0; k < n; k++)
                        {
                            if (a[i] = a[j] + a[k])
                            {
                                if (d >= a[i])
                                {
                                    cout << "YES"<<endl;
                                    flag=1;
                                    break;
                                
                                }
                            }
                        }
                        //cout<<flag;
                        if (flag)
                        {
                            break;
                        }
                    }
                    if (flag)
                    {
                        break;
                    }
                }
                if (!flag)
                {
                    cout <<"NO"<<endl;
                }
            }
            else
                exit(1);
        }
    }
    else
        exit(1);
    return 0;
}