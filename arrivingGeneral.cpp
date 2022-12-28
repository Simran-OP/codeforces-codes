#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 2 && n <= 100)
    {
        int a[n];
        int maxpos , max=0 ,min=101,minpos;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]>=1&& a[i]<=100)
            {
                if(max<a[i])
                {
                    max=a[i];
                    maxpos=i;
                    //cout<<max<<" "<<maxpos<<endl;
                }
                if(min>=a[i])
                {
                    min=a[i];
                    minpos=i;
                    //cout<<min<<" "<<minpos<<endl;
                }
            }
            else exit(1);
        }
        if(maxpos>minpos)
            {
                cout<<((n-(n-maxpos))+(n-minpos-1)-1);
            }
            else{
                 cout<<((n-(n-maxpos))+(n-minpos-1));
            }
    }
    else
        exit(1);
    return 0;
}