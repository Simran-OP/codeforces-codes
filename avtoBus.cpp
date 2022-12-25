// // https://codeforces.com/problemset/problem/1679/A
// #include <bits/stdc++.h>
// using namespace std;
// // long int check(long int n, int x , int y )
// // {
// //     long long int ans, rem, temp , num;
// //     temp = n;
// //                 ans = temp / x;
// //                 rem = temp % x;
// //                 // if(ans!=0)
// //                 // {
// //                 // cout << "ans " << ans << " temp " << temp;
// //                 // cout << "rem " << rem;
// //                 if (rem == 0)
// //                 {
// //                     num = ans;
// //                 }
// //                 else if (rem < y)
// //                 {
// //                     int flag = 0;
// //                     num = ans;
// //                     while (num != -1)
// //                     {
// //                         num--;
// //                         if ((temp - x * num) % y == 0)
// //                         {
// //                             num = num + (temp - x * num) / y;
// //                         }
// //                         flag = 1;
// //                     }
// //                     if (flag)
// //                         num = -1;
// //                     //}
// //                 }
// // return num;
// // }
// int main()
// {
//     long long int t;
//     cin >> t;
//     if (t <= 1000 && t >= 1)
//     {
//         while (t--)
//         {
//             long long int n, count = 0;
//           long long int ans, rem, temp , num;

//             long long int mul4 = 0, mul6 = 0;
//             cin >> n;
//             // cout<<"n "<<n<<endl;
//             if (n >= 1 && n <= 10E18)
//             {
//                 // mul4=check(n,4,6);
//                 // mul6=check(n,6,4);
//                 temp = n;
//                 ans = temp / 4;
//                 rem = temp % 4;
//                 // if(ans!=0)
//                 // {
//                 // cout << "ans " << ans << " temp " << temp;
//                 // cout << "rem " << rem;
//                 if (rem == 0)
//                 {
//                     mul4 = ans;
//                 }
//                 else if (rem < 6)
//                 {
//                     int flag = 0;
//                     mul4 = ans;
//                     while (mul4 != -1)
//                     {
//                         mul4--;
//                         if ((temp - 4 * mul4) % 6 == 0)
//                         {
//                             mul4 = mul4 + (temp - 4 * mul4) / 6;
//                         }
//                         flag = 1;
//                     }
//                     if (flag)
//                         mul4 = -1;
//                     //}
//                 }
//                 // cout << "mul4 " << mul4;
//                 temp = n;

//                 ans = temp / 6;
//                 rem = temp % 6;
//                 // if(ans!=0)
//                 // {
//                 // cout << "ans " << ans << " temp " << temp;
//                 if (rem == 0)
//                 {
//                     mul6 = ans;
//                 }
//                 else
//                 {
//                     int flag = 0;
//                     mul6 = ans;
//                     if (rem % 4 == 0)
//                     {
//                         mul6 += (rem / 4);
//                     }
//                     else
//                     {
//                         while (mul6 != -1)
//                         {
//                             //  cout << "mul6 " << mul6<<endl;
//                             mul6--;
//                             // cout << "mul6 " << mul6<<endl;
//                             // cout << (temp - 6 * mul6) % 4 << endl;
//                             if ((temp - 6 * mul6) % 4 == 0)
//                             {
//                                 mul6 = mul6 + (temp - 6 * mul6) / 4;
//                                 // cout << "mul4 " << endl;
//                                 break;
//                                 flag = 1;
//                             }
//                             if (flag)
//                                 mul6 = -1;
//                             // cout << mul6;
//                             // 1cout << "ans " << ans << " temp " << temp;
//                         }
//                     }
//                 }
//                 // cout<<endl;
//                 if (mul6 == -1 || mul4 == -1)
//                 {
//                     cout << "-1" << endl;
//                 }
//                 else if (mul6 == 0)
//                 {
//                     cout << mul4 << " " << mul4 << endl;
//                     ;
//                 }
//                 else if (mul4 == 0)
//                 {
//                     cout << mul6 << " " << mul6 << endl;
//                 }
//                 else if (mul6 <= mul4)
//                     cout << mul6 << " " << mul4 << endl;
//                 else if (mul4 <= mul6)
//                     cout << mul4 << " " << mul6 << endl;
//             }
//             else
//             {
//                 exit(1);
//             }
//         }
    
//     }
//     else
//     {
//         exit(1);
//     }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}