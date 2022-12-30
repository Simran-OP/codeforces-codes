#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin>>T;
	while(T--)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if((y1==y2||y1==y3||y2==y3)&&(x1==x2||x2==x3||x1==x3))puts("NO");
		else puts("YES");
	}

    return 0;
}