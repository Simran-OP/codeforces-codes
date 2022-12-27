// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,rem=0;
//         int k=0;
//         cin>>n;
//         int val=n;
//        do
//         {
//             val=val/10;
//             k++;
//             //cout<<val<<" "<<k<<endl;
//         }while(val!=0);
//             cout<<n-(pow(10,k-1))<<endl;
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;int main(){int t;cin>>t;while(t--){string s;cin>>s;s[0]--;cout<<atoi(s.c_str())<<endl;} return 0;}