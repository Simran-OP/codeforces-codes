#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int val;
        cin >> val;
        int num = 0;
        int flag = 0;
        for (int i = 1; i <= val; i++)
        {
            string str = i;
            cout << str <<endl;;
            for (int j = 0; j < str.length(); j++)
            {
                int cnt = 0;
                if (str[j] != '0')
                {
                    cnt++;
                    if (cnt > 2)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (!flag)
                    num++;
            }
            cout << num;
        }
    }
    return 0;
}
