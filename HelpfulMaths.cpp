// // https://codeforces.com/problemset/problem/339/A
// A. Helpful Maths
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

// The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

// You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

// Input
// The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

// Output
// Print the new sum that Xenia can count.

// Examples
// inputCopy
// 3+2+1
// outputCopy
// 1+2+3
// inputCopy
// 1+1+3+1+3
// outputCopy
// 1+1+1+3+3
// inputCopy
// 2
// outputCopy
// 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int index;
    if (str.size() <= 1000)
    {
        for (int i = 0; i < str.size(); i = i + 2)
        {
            int flag = 0;
            int min = str[i] - 48;
           // cout << "min " << min << endl;
            //cout << "str[i] " << str[i] << endl;
            for (int j = i + 2; j < str.size(); j = j + 2)
            {
                if (min > str[j] - 48)
                {
                    min = str[j] - 48;
                    flag = 1;
                    index=j;
                    //cout << "min " << min << endl;
                }
            }
            if (flag)
            {
                int temp;
                //cout << "swap  str[" << i << "] and str[" << index << "] " << str[i] << " " << str[j - 2] << endl;
                temp = str[i] - 48;
                //cout << temp;
                str[i] = min + 48;
                //cout << min + 48;
                str[index] = temp + 48;
                //cout << temp + 48;
               // cout << "swap  str[" << i << "] and str[" << index << "] " << str[i] << " " << str[j - 2] << endl;
            }
        }
        cout << str;
    }
    else
    {
        exit(1);
    }
    return 0;
}