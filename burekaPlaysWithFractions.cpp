#include <bits/stdc++.h>
using namespace std;
int reduceFraction(long int *x, long int *y)
{
    long int d;
    d = __gcd(*x, *y);

    *x = *x / d;
    *y = *y / d;

    //cout << "x = " << *x << ", y = " << *y << endl;
    return 0;
}
bool check(long int n1, long int n2)
{
    if (n1 == n2)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    long int t;
    cin >> t;
    if (t >= 1 && t <= 10E4)
    {
        while (t--)
        {
            long int a, b, c, d;
            cin >> a >> b >> c >> d;
            //cout << a << b << c << d << endl;
           long int denoc = 0;

            if (a >= 0 && a <= 10E9 && b >= 0 && b <= 10E9 && c >= 0 && c <= 10E9 && d >= 0 && d <= 10E9)
            {
                if (a == 0 ) // numenator is 0
                {if(c==0) cout<<0<<endl;
                else
                    cout << 1<<endl;
                }
                else
                {
                    reduceFraction(&a, &b);
                    reduceFraction(&c, &d);
                    //cout << a << " "<<b<<" " << c<<" " << d << endl;
                    if (check(a, c) && check(b, d)) // 6 3 2 1
                    {
                      //  cout << "here" << endl;
                        cout << 0<<endl;
                    }
                    else
                    {
                        if (__gcd(a, c) == 1)
                        {
                            if (a == min(a, c))
                            {
                                a = a * b *c;
                            }
                            else
                            {
                                c = c * d*a;
                            }
                            reduceFraction(&a, &b);                            
                            reduceFraction(&c, &d);                            

                            //cout << a << b << c << d << endl;
                            if (check(a, c)) // 6 3 2 1
                            {
                                //cout<<"nemo equal"<<endl;
                                if (check(b, d))
                                {
                                   // cout<<"deno equal"<<endl;
                                    cout << 1<<endl;
                                    // break;
                                }
                                else
                                {
                                    cout<<2<<endl;
                                    // break;
                                }
                            }
                        }
                        else if( __gcd(a,c)==a || __gcd(a,c)== c || __gcd(b,d)==b || __gcd(b,d)==d)
                        {
                            cout<<"1"<<endl;;
                            if(b==min(b,d))
                            {
                                // b=b*__gcd(a,b)*__gcd
                            }
                            // break;
                        }
                    }
                }
            }
            else
                exit(1);
        }
    }
    else
    {
        exit(1);
    }
    return 0;
}