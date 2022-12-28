#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 1000)
    {
        int a[n];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i!=0)
            {
                int min=i;int max=i;
                int k=0;
                for(k=0; k<i ;k++)
                {
                   // cout<<"a["<<min<<"] "<<a[min]<<"a["<<k<<"] "<<a[k]<<endl;
                    if(a[min]>=a[k])
                    {
                       // cout<<"a["<<min<<"] "<<a[min]<<"<="<<"a["<<k<<"] "<<a[k]<<endl;
                        min=k;
                    }
                    if(a[max]<=a[k])
                    {
                       // cout<<"a["<<max<<"] "<<a[max]<<">="<<"a["<<k<<"] "<<a[k]<<endl;
                        max=k;
                    }
                }
                if(i==min)
                {
                  //  cout<<count<<endl;
                    count++;
                }
                else if(max==i)
                {
                   // cout<<count<<endl;
                    count++;
                }
            }
         }
cout<<count;
    }
    else
        exit(1);
    return 0;
}