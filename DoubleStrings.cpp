#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (1 <= t <= 10E4 && t--)
    {
        int n;
        cin >> n;
        if (1 <= n <= 10E5)
        {
            string str[n + 1];
            bool ans = 0;
            for (int i = 1; i <= n; i++)
            {
                cin >> str[i];
                if (str[i].size() >= 8)
                    exit(2);
            }
            for (int i = 1; i <= n; i++)
            {
                // cout<<"i"<<str[i]<<endl;
                for (int j = 1; j <= n; j++)
                {
                    // cout<<"j"<<str[j]<<endl;
                    for (int k = 1; k <= n; k++)
                    {
                        //  cout<<"conbo"<<str[j]+str[k]<<endl;
                        if (str[i] == str[j] + str[k] && i != j && k != i)
                        {
                            cout << "str[" << i << "] == str[" << j << "] + str[" << k << "]  " << str[j] + str[k]<<endl;
                            cout << 1;
                            ans = 1;
                            break;
                        }
                    }
                    if(ans) break;
                }
                //cout<<i;
                if (ans)
            {
                cout << 0;
            }
            }
            cout<<endl;
            
        }
        else
            exit(1);
    }
    return 0;
}