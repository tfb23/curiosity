//    https://codeforces.com/problemset/problem/707/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, flag=0;
	cin>>n>>m;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			string s;
			cin>>s;
			if (s=="C" || s=="M" || s=="Y")
			{
				flag=1;
			}
		}
	}
	if (flag)
	{
		puts("#Color");
	}
	else 
	{
		puts("#Black&White");
	}
}
