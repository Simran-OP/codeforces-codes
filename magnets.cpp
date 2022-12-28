// https://codeforces.com/problemset/problem/344/A
// A. Magnets
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Mad scientist Mike entertains himself by arranging rows of dominoes. He doesn't need dominoes, though: he uses rectangular magnets instead. Each magnet has two poles, positive (a "plus") and negative (a "minus"). If two magnets are put together at a close distance, then the like poles will repel each other and the opposite poles will attract each other.

// Mike starts by laying one magnet horizontally on the table. During each following step Mike adds one more magnet horizontally to the right end of the row. Depending on how Mike puts the magnet on the table, it is either attracted to the previous one (forming a group of multiple magnets linked together) or repelled by it (then Mike lays this magnet at some distance to the right from the previous one). We assume that a sole magnet not linked to others forms a group of its own.


// Mike arranged multiple magnets in a row. Determine the number of groups that the magnets formed.

// Input
// The first line of the input contains an integer n (1 ≤ n ≤ 100000) — the number of magnets. Then n lines follow. The i-th line (1 ≤ i ≤ n) contains either characters "01", if Mike put the i-th magnet in the "plus-minus" position, or characters "10", if Mike put the magnet in the "minus-plus" position.

// Output
// On the single line of the output print the number of groups of magnets.

// Examples
// inputCopy
// 6
// 10
// 10
// 10
// 01
// 10
// 10
// outputCopy
// 3
// inputCopy
// 4
// 01
// 01
// 10
// 10
// outputCopy
// 2
// Note
// The first testcase corresponds to the figure. The testcase has three groups consisting of three, one and two magnets.

// The second testcase has two groups, each consisting of two magnets.





#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001];
    int n,count=1;
    cin>>n;
    if(n>=1&&n<=100000)
    {
        for(int i=0 ;i <n ;i++)
        {
            cin>>a[i];
            if(a[i]!= 10 && a[i] !=01)
            {
                exit(1);
            }
        }
        for(int i=0 ;i <n-1; i++)
        {
            if((a[i]== 10 && a[i+1]==01) || (a[i]==01 && a[i+1]==10))
            {
                count++;
            }
        }
        // if(n==1)
        // {
        //     count++;
        // }
        cout<<count;
    }
    else exit(1);
return 0;
}