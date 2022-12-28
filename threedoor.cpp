#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    int flag = 1;
    if (t >= 1 && t <= 18)
    {
        while (t--)
        {
            cout<<t;
            int x;
            int arr[4];
            cin >> x;
            cout<<"x "<<x<<endl;
            for (int i = 1; i <= 3; i++)
            {
                cin >> arr[i];
                cout<<arr[i]<<endl;
                if (!(arr[i] <= 3 && arr[i] >= 0))
                {
                    exit(1);
                }
            }
            cout<<x<<endl;
            while (arr[x] != 0 && count != 3)
            {
                if (arr[x] == 0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    count++;
                    x = arr[x];
                    cout<<"x "<<arr[x]<<endl;
                }
            }
            if (flag) cout<<"NO";
            cout<<"YES";
        }
    }
    else
        exit(1);
xy:
    return 0;
}