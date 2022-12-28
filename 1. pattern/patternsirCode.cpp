
     
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 
//rows----grid----observeand derive maths formula
    //for each row --spaces and chars in the row;
    // for (int i = 1; i <= n; i++)
    // {
    //  for (int j = 1; j <= i; j++) {
    //      cout << "* ";
    //  }
    //  cout << endl;
    // }
 
 
    //1.>rows----grid(rows,colms==tn+(tn-1)*spaces)----maths formula for each row (spaces + chars)
    //2.>without spaces---->with spaces
    //3.>formulas (basic maths)
    // ------#
    // ----#-#
    // --#-#-#
    // #-#-#-#
 
    // for (int i = 1; i <= n; i++)
    // {
    //  int temp = 2 * (n - i);
 
    //  for (int j = 1; j <= temp; j++) cout << " ";
    //  for (int j = 1; j <= i; j++) cout << "# ";
    //  cout << endl;
    // }
 
    // for (int i = 1; i <= n; i++)
    // {
    //  int temp = (n - i);
 
    //  for (int j = 1; j <= temp; j++) cout << " ";
    //  for (int j = 1; j <= i; j++) cout << "#";
    //  cout << endl;
    // }
 
    //////////////////pyramid pattern with spaces
    // for (int i = 1; i <= n; i++)
    // {
    //  int space = 2 * (n - i);
    //  int chars = 1 + (i - 1) * 2;
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "# ";
    //  cout << endl;
    // }
    // //////////////////pyramid pattern without spaces
 
    // for (int i = 1; i <= n; i++)
    // {
    //  int space = (n - i);
    //  int chars = 1 + (i - 1) * 2;
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "#";
    //  cout << endl;
    // }
 
 
 
    // int n; cin >> n;//diamond length
    // int n1 = (n + 1) / 2;//upper pyramid length with spaces
 
    // for (int i = 1; i <= n1; i++)
    // {
    //  int space = 2 * (n1 - i);
    //  int chars = 1 + 2 * (i - 1);
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "# ";
    //  cout << endl;
    // }
    // for (int i = n1 - 1; i >= 1; i--)
    // {
    //  int space = 2 * (n1 - i);
    //  int chars = 1 + 2 * (i - 1);
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "# ";
    //  cout << endl;
    // }
 
    // cout << endl << endl;
    // int n; cin >> n;//diamond length
    // int n1 = (n + 1) / 2;//upper pyramid length
 
    // for (int i = 1; i <= n1; i++)
    // {
    //  int space = (n1 - i);
    //  int chars = 1 + 2 * (i - 1);
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "#";
    //  cout << endl;
    // }
    // for (int i = n1 - 1; i >= 1; i--)
    // {
    //  int space = (n1 - i);
    //  int chars = 1 + 2 * (i - 1);
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "#";
    //  cout << endl;
    // }
 
 
 
    // int n; cin >> n;
    // int n1 = (n + 1) / 2;
    // for (int i = n1; i >= 1; i--)
    // {
    //  int space = 2 * (n1 - i);
    //  int chars = 1 + 2 * (i - 1);
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "# ";
    //  cout << endl;
    // }
    // for (int i = 2; i <= n1; i++)
    // {
    //  int space = 2 * (n1 - i);
    //  int chars = 1 + 2 * (i - 1);
    //  for (int j = 1; j <= space; j++) cout << " ";
    //  for (int j = 1; j <= chars; j++) cout << "# ";
    //  cout << endl;
    // }
 
///sandglass inverted
    int n; cin >> n;
    int n1 = (n + 1) / 2;
    for (int i = 1; i <= n1; i++)
    {
        int temp = 2 * (n1 - i) - 1;
        temp = 2 * temp;
        for (int j = 1; j <= i; j++) cout << "# ";
        for (int j = 1; j <= temp; j++) cout << " ";
        for (int j = 1; j <= i - 1; j++) cout << "# ";
        if (temp != -2) cout << "# ";
        cout << endl;
    }
    for (int i = n1 - 1; i >= 1; i--)
    {
        int temp = 2 * (n1 - i) - 1;
        temp = 2 * temp;
        for (int j = 1; j <= i; j++) cout << "# ";
        for (int j = 1; j <= temp; j++) cout << " ";
        for (int j = 1; j <= i - 1; j++) cout << "# ";
        if (temp != -2) cout << "# ";
        cout << endl;
    }
 
    return 0;
}
