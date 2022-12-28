#include <bits/stdc++.h>
using namespace std;
int DELETE(int x, int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Search x in array
        for (int i = 1; i <= n; i++)
            if (arr[i] == x)
                break;

        // If x found in array
        if (i < n)
        {
            // reduce size of array and move all
            // elements on space ahead
            n = n - 1;
            for (int j = i; j <= n; j++)
                arr[j] = arr[j + 1];
        }
    }
    return n;
}

bool check(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        int val = arr[i];
        for (int j = 1; j <= n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1], count = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int index = 1;
        ab:
        for (int j = index; j <= n; j++)
        {
            if (a[(j + 1) % n] != a[(n - j + 1)])
            {
                cout<<a[j]<<" ";
                n = DELETE(a[j], a, n);
                cout<<n<<endl;
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i];
                }
                cout << endl;
                count++;
                if (check(a, n))
                {
                    cout << count + n;
                    break;
                }
            }
        }
        if (count == 0)
        {
            DELETE(a[1], a, n);
            for (int i = 1; i <= n; i++)
                {
                    cout << a[i];
                }
                cout << endl;
                goto ab;
        }
    }
    return 0;
}