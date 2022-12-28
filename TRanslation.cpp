// // https://codeforces.com/problemset/problem/41/A
// A. Translation
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

// Input
// The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

// Output
// If the word t is a word s, written reversely, print YES, otherwise print NO.

// Examples
// inputCopy
// code
// edoc
// outputCopy
// YES
// inputCopy
// abb
// aba
// outputCopy
// NO
// inputCopy
// code
// code
// outputCopy
// NO

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    if (s.size() <= 100 && t.size() <= 100)
    {
        if (s.size() != t.size())
        {
            cout << "NO";
            goto y;
        }
        for (int i = 0, j = s.size() - 1; i < s.size(), j >= 0; i++, j--)
        {
            if (t[i] != s[j])
            {
                cout << "NO";
                goto y;
            }
        }
        cout << "YES";
    }
    else
        exit(1);
    y:
    return 0;
}