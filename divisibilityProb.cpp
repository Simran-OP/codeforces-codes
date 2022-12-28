#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t >= 1 && t <= 10E4)
    {
        int arr[t];
        long int a, b;
        
        for (int i = 0; i < t; i++)
        {
            cin >> a >> b;
            long int count=0;
            if (a >= 1 && b >= 1 && a <= 10E9 && b <= 10E9)
            {
                if (a % b == 0)
                {
                    arr[i] = 0;
                }
                else
                {
                    while (!(a % b == 0))
                    {
                        a++;
                        count++;
                    }
                    arr[i]=count;
                }
                
            }
            else
                exit(1);
        }
        for(int i=0;i<t;i++)cout<<arr[i]<<endl;
    }
    else
        exit(1);

    return 0;
}


// https://codeforces.com/problemset/problem/1328/A
// A. Divisibility Problem
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given two positive integers a and b. In one move you can increase a by 1 (replace a with a+1). Your task is to find the minimum number of moves you need to do in order to make a divisible by b. It is possible, that you have to make 0 moves, as a is already divisible by b. You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

// The only line of the test case contains two integers a and b (1≤a,b≤109).

// Output
// For each test case print the answer — the minimum number of moves you need to do in order to make a divisible by b.

// Example
// inputCopy
// 5
// 10 4
// 13 9
// 100 13
// 123 456
// 92 46
// outputCopy
// 2
// 5
// 4
// 333
// 0
