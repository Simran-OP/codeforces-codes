// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int a[n];
// //     for(int i=0 ;i <n;i++)cin>>a[i];
// //     for(int i=n-1;i>=1;i++)
// //     {
// //         if(a[i]==0)
// //         {
// //             int r=i;
// //             if(r-1<=0) cout<<"no";
// //             else
// //             {
// //             int l=r-1;

// //             }



// //         }

// //     }

// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=4;
//     for(int i=1; i<=n ; i++)
//     {
//         for(int j=1;j<=(n-i)*2;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++)
//         {
//             cout<<"* ";
//         }
//         for(int n=1;n<=i-1;n++)
//         {
//             cout<<"* ";
//         }
//         for(int m=1;m<=2*(n-(i+1));m++)
//         {
//             cout<<" ";
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=14;
    int n1=(n+1)/2;
    for(int i=1;i<=n1-1;i++)
    {
        //cout<<i;
        int space=2*(i-1);
        int ch=1+(n1-i)*2;
        for(int j=1;j<=space;j++) cout<<" ";
        for(int k=1;k<=ch;k++) cout<<"* ";
        cout<<endl;
    }
    for(int i=1 ; i<=n1 ;i++)
    {
        int space=2*(n1-i);
        int ch=1+(i-1)*2;
        for(int j=1;j<=space;j++) cout<<" ";
        for(int k=1;k<=ch;k++) cout<<"* ";
        cout<<endl;
    }

    return 0;
}