// odeforces.com/problemset?order=BY_SOLVED_DESC&tags=800-800
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    if (n >= 3 && n <= 50 && m >= 3 && m <= 50)
    {
        // int flag=1;
        int count2=1;
        for(int i=0;i<n;i++)
        {
            for( int k=0;k<m;k++)
            {
                if(i%2==0)   // even - 0,2,4,6,8
                {
                    cout<<"#";
                }
                else if (i%2!=0) // odd -1,3,5
                {
                    if(count2==i)  // #
                    {
                       // cout<<"i "<<i<<"count2 "<<count2<<endl;
                       for(int b=0;b<m-1;b++)
                        {
                            cout<<".";
                        }
                        cout<<"#";
                       // count1+=2;
                        break;
                        
                    }
                    else
                    {
                        cout<<"#";
                        count2+=4;
                        for(int b=0;b<m-1;b++)
                        {
                            cout<<".";
                        }
                        break; // to k loop
                        
                    }

                }
            }
            cout<<"\n";
            // flag=1;
        }
    }
    else
        exit(1);
    return 0;
}