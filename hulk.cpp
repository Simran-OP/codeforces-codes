// A. Hulk
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk. That's why he asked you to help him to express his feelings.

// Hulk likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...

// For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

// Please help Dr. Banner.

// Input
// The only line of the input contains a single integer n (1 ≤ n ≤ 100) — the number of layers of love and hate.

// Output
// Print Dr.Banner's feeling in one line.

// Examples
// inputCopy
// 1
// outputCopy
// I hate it
// inputCopy
// 2
// outputCopy
// I hate that I love it
// inputCopy
// 3
// outputCopy
// I hate that I love that I hate it

// Codeforces (c) Copyright 2010-2022 Mike Mirzayanov
// The only programming contests Web 2.0 plat
// https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int counter = 1;
    cin >> n;
    //int rem;
    string h = {"I hate"};
    string l = {"I love"};
    if (n <= 100 && n >= 1)
    {
       // while (n != 1)
       // {
            for(int i=1;i<=n-1;i++)
            {
                int ch;
                if(i%2==0)
                {
                    ch=2;
                }
                else{
                    ch=1;
                }
                switch(ch)
            {
                case 1:
                cout<<h<<" that ";
                break;
                case 2:
                cout<<l<<" that ";
                break;
            }
            
            }
            if(n%2==0)
            {
                cout<<l<<" it";
            }
            else cout<<h<<" it";

            
       // }
    }
    else
        exit(1);
    return 0;
}