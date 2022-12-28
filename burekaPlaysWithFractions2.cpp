#include <bits/stdc++.h>
using namespace std;
void reduce(long int *x, long int *y)
{
    long int gcd = __gcd(*x, *y);
    *x = *x / gcd;
    *y = *y / gcd;
}
bool check(long int a, long int b, long int c, long int d)
{
    bool eq = false;
    if (a == c && b == d)
    {
        eq = true;
    }
    return eq;
}
int main()
{
    int t;
    cin >> t;
    while (t-- && 1 <= t <= 10E4)
    {
        long int a, b, c, d;
        bool ans;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (0 <= a, c <= 10E9 && 1 <= b, d <= 10E9)
        {
            reduce(&a, &b);
            reduce(&c, &d);
            cout << a << "/" << b << endl;
            cout << c << "/" << d << endl;
            if (a == 0 && c == 0)
            {
                cout << "0";
            }
            else if (a == 0 || c == 0)
            {
                cout << "0";
            }
            else
            {
                if (__gcd(a, c) == 1 && __gcd(b, d) == 1)
                {
                    if (a == c)
                    {
                        if(a==min(a,c))
                        {
                            a=a*c;
                            ans=check(a,b,c,d);
                            if(!ans)
                            {
                                b=b*c;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            exit(1);
        }
    }
    return 0;
}