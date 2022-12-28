// https://codeforces.com/contest/1703/problem/B4

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
        if (1 <= n <= 50)
        {
            string str;
            cin >> str;
            int count = 1;
            for(int j=0;j<=n-1;j++)
            for(int i=j+1;i<n;i++)
            {
                if(str[i]==str[j] && str[i]!=-1)
                {
                    count++;
                    str[i]=-1;
                }
            }
            cout <<(n*2)-(count-1)<<endl;
        }
        else
            exit(1);
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int n, r = 0, m[99]{};
//         string s;
//         cin >> n >> s;
    
//         for (int x : s)
//         {
//             cout<<"r "<<r<<endl;
//             cout<<"M["<<x<<"]="<<m[x]<<endl;
//             ++r += !m[x]++;
//             cout<<"r "<<r<<endl;
//             cout<<"M["<<x<<"]="<<m[x]<<endl;
//         }
//         cout << r << "\n";
//     }
// }