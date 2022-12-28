// https://codeforces.com/problemset/problem/1703/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- && 1 <= t <= 10E3)
    {
        string str;
        cin >> str;
        if (str.size() != 3)
        {
            exit(1);
        }
        for (int i = 0; str[i] != '\0'; i++)
        {
            /* code */
            str[i] = tolower(str[i]);
        }
        if (str == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
//msttt

// #include <bits/stdc++.h>
// using namespace std;
// string a = "yYeEsS", s;
// int t, i, ok;
// int main()
// {
//     cin >> t;
//     while (t-- > 0)
//     {
//         cin >> s;
//         for (ok = 1, i = 0; i < 3; ++i)
//             if ((s[i] != a[i << 1]) && (s[i] != a[i << 1 | 1]))
//                 ok = 0;
//         cout << (ok ? "YES" : "NO") << endl;
//     }
// }