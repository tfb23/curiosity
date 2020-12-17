//    https://codeforces.com/problemset/problem/1452/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int x, y;
		cin>>x>>y;
		if(x==y)
		{
			cout<<x+y<<endl;
		}
		else
		{
			int r;
			r=max(x, y);
			cout<<r*2-1<<endl;
		}
	}
}
