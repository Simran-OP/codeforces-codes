#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    for(int i=10000;i>=5;i=i/10)
    {
        for(int j=1;j<=1000;j=j+5)
        count++;
        // cout<<i<<endl;

    }
    cout<<count;
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,flag=0;
//     string alpha={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
//     cin>>n;
//     if(n>=1 && n<=100)
//     {
//         string str;
//         cin>>str;
//         if(str.size()==n)
//         {
//             for(int k=0;k<26;k++)
            
//             {
//                 for(int i=0;i<str.size();i++)
//                 {
//                     if(tolower(str[i])==alpha[k])
//                     {
//                         //cout<<str[i]<<" "<<alpha[k]<<endl;
//                         flag=0;
//                         break;
//                     }
//                     else
//                     {
//                         flag=1;
//                         //cout<<str[i]<<" "<<alpha[k]<<endl;
//                     }
//                 }
//                 if(flag==1)
//                 {
//                     cout<<"NO";
//                     goto ab;
//                 }
//             }
//             cout<<"YES";
            
//         }
//         else
//         exit(1);

//     }
//     else exit(1);
//     ab:
//     return 0;
// }