// https://codeforces.com/problemset/problem/1705/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t >= 1 && t <= 10E4)
    {
        while (t--)
        {
            int n;
            cin >> n;
            if (n >= 2 && n <= 2 * (10E4))
            {
                int a[n + 1];
                for (int i = 1; i <= n; i++)
                {
                    cin >> a[i];
                    if (!(a[i] >= 0 && a[i] <= 10E9))
                    {
                        exit(3);
                    }
                }
                cout<<"a[1]"<<a[1];
                // main code;
                int count = 0;
                for (int i = 1; i <= n; i++)
                {
                    cout<<"a["<<i<<"] = "<<a[i]<<endl;
                    int flag=0;
                    if (a[i] != 0)
                    {
                        flag=1;
                        for (int k = n; k > i; k--)
                        {
                            cout<<"int k";
                            if (a[k] == 0)
                            {
                                for (int m= k; m > -1; m--)
                                {
                                    
                                }
                                count++;
                                a[k]++;
                                a[k+1]--;
                                cout<<"her;";
                                cout<<k<<" "<<a[k]<<" "<<a[k-1]<<endl;
                            }
                            cout<<"count"<<count<<endl;
                            
                        }
                         for (int i = 1; i <= n; i++)
                {
                    cout<<"display";
                    cout<<a[i];
                    if (!(a[i] >= 0 && a[i] <= 10E9))
                    {
                        exit(3);
                    }
                }
                        for (int l = i; l < n-1; l++)
                        {
                            count+=a[l];
                            a[l]=0;
                        }
                    }
                   // if(flag) break;
                }
                cout<<"ans"<<count;
            }
            else
                exit(2);
        }
    }
    else
        exit(1);
    return 0;
}