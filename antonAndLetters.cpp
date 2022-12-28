// https://codeforces.com/problemset/problem/443/A
// A. Anton and Letters
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

// Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

// Input
// The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

// Output
// Print a single number — the number of distinct letters in Anton's set.

// Examples
// inputCopy
// {a, b, c}
// outputCopy
// 3
// inputCopy
// {b, a, b, a}
// outputCopy
// 2
// inputCopy
// {}
// outputCopy
// 0

#include <bits/stdc++.h>
using namespace std;
#define MAXLEN 1000
int main()
{
    char str[MAXLEN];
    int count = 0;
    int ub;
    gets(str);
    int i = 1;
    while (str[i] != '}')
    {
        i++;
    }
    ub = i - 1;
   //cout << "UB" << ub;
    for (i = 1; i <= ub; i += 3)
    {
      // cout << "i  " << i << endl;
      // cout << "a[" << i << "] " << str[i] << endl;
       if(str[i]!=-1){
        count++;

        for (int k = i + 3; k <= ub; k += 3)
        {
            if (i != k)
            {
               //cout << "a[" << i << "] " << str[i] << endl;
                //cout << " compared to ";
               //cout << "a[" << k << "] " << str[k] << endl;
                if (str[i] == str[k])
                {
                    
                    str[k]=-1;
                    //cout << "a[" << k << "] " << str[k] << endl;
                }
            }
        }
       }
    }
    cout << count;
    return 0;
}