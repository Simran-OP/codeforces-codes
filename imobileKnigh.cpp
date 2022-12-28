#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, m;
    cin >> n >> m;
   // cout << "n " << n << "M" << m << endl;
    int a[n + 1][m + 1];
        for (int i = n; i >= 1; i--)
        {
            for (int j = m; j >= 1; j--)
            {
                int tempi = i;
                int tempj = j;
                int knight = a[tempi][tempj];
                int x[]={1,2};
                int y[]={2,1};
               // cout << "tempi" << tempi << "tempj " << tempj << endl;
                {
                    for(int l=0 ; l<=1;l++)
                    {
                        if(1<=tempi+x[l]<=n && 1<=tempj+y[l]<=m){}
                        else if(1<=tempi+x[l]<=n && 1<= tempj-y[l]<=m){}
                        else if(1<=tempi-x[l]<=n&&1<=tempj+y[l]<=m){}
                        else if(1<=tempi-x[l]<=n&&1<=3
1 7
8 8
3 3
tempj-y[l]<=m){}
                        else{cout<<tempi<<" "<<tempj<<endl;}

                    }
                }
            }
            break;
        }
        cout<<"here";
    }
    return 0;
}