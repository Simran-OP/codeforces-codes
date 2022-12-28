#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pov = 0, nev = 0;
    int sure=0;
    int a[n];
    if (n >= 1 && n <= 10E5)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ub = n - 1;
        int lb=0;
        int flag = 0;
        
        while (ub + 1 && !flag )
        {
            while(a[lb]==-1)
            {
                sure++;
                //cout<<"lb"<<lb<<endl;
                lb++;
            }
            //cout<<"lb before loop "<<lb;
            //cout << ub;
            //cout << " flag " << flag << endl;
            
            
            if (a[ub] == -1)
            {
                flag = 1;
                //if(lb==0) lb=-1;
                //cout<<lb<<endl;
                for (int k = lb; k <= ub; k++)
                {
                    //cout<<"k"<<k<<endl;
                    if (a[k] >= 0)
                    {
                        pov = pov + a[k];
                        //cout<<"pov"<<pov<<"a["<<k<<"] ="<<a[k]<<endl;
                    }
                    else
                    {
                        nev = nev + -1;
                        ////cout<<"nev"<<nev<<endl;
                    }
                }
            }
            ub--;
        }
        if(pov>=abs(nev)) cout<<sure;
        else
        cout <<sure+abs(pov + nev);
    }
    else
    {
        exit(1);
    }
    return 0;
}



