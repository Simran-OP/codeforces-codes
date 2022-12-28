// A. I Wanna Be the Guy
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

// Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?

// Input
// The first line contains a single integer n (1 ≤  n ≤ 100).

// The next line contains an integer p (0 ≤ p ≤ n) at first, then follows p distinct integers a1, a2, ..., ap (1 ≤ ai ≤ n). These integers denote the indices of levels Little X can pass. The next line contains the levels Little Y can pass in the same format. It's assumed that levels are numbered from 1 to n.

// Output
// If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh, my keyboard!" (without the quotes).

// Examples
// inputCopy
// 4
// 3 1 2 3
// 2 2 4
// outputCopy
// I become the guy.
// inputCopy
// 4
// 3 1 2 3
// 2 2 3
// outputCopy
// Oh, my keyboard!
// Note
// In the first sample, Little X can pass levels [1 2 3], and Little Y can pass level [2 4], so they can pass all the levels both.

// In the second sample, no one can pass level 4.

// https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n;
    if (n >= 1 && n <= 100)
    {
        cin >> p;
        {
            if (p >= 0 && p <= n)
            {

                int a[201];
                for (int i = 0; i < p; i++)
                {
                    cin >> a[i];
                    if (!(a[i] >= 1 && a[i] <= n))
                    {
                        exit(1);
                    }
                }
                cin >> q;
                if (q >= 0 && q <= n)
                {
                    if (p + q < n)
                    {
                        cout << "Oh, my keyboard!";
                        goto xy;
                    }
                    //cout << "p " << p << endl;
                    for (int i = p; i < p+q; i++)
                    {
                        cin >> a[i];
                        //cout << i << " " << a[i];
                        if (!(a[i] >= 1 && a[i] <= n))
                        {
                            exit(1);
                        }
                    }
                }
                else
                    exit(1);

               // for (int i = 0; i < p + q; i++)
                   // cout << a[i] << "  ";
                //cout << endl;
                int count = 1;
                int flag = 0;
                ab:
                while (count <= n)
                {
                    for (int i = 0; i < p + q; i++)
                    {
                       //cout<<i<<endl;

                        if (count == a[i])
                        {
                            flag = 1;
                            count++;
                            goto ab;
                        }
                        else
                        {
                            
                            flag = 0;
                            
                        }
                        //cout << i <<"a["<<i<<"] "<<a[i]<<"count " << count<<" "<< flag<<endl;
                        
                    }
                    if(flag==0)
                        {
                            goto m;
                        }
                     count++; 
                    
                }
                if (flag == 1)
                    cout << "I become the guy.";
                else
                {m:
                    cout << "Oh, my keyboard!";
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
    xy:
    return 0;
}