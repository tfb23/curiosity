//    https://codeforces.com/problemset/problem/16/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, n, m;
	cin>>n>>m;
	bool f=1;
	
	char s[123][123];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			cin>>s[i][j];
		}
	}
	
	for(i=1; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(s[i][j]==s[i-1][j])
			{
				f=0;
				break;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=1; j<m; j++)
		{
			if(s[i][j]!=s[i][j-1])
			{
				f=0;
				break;
			}
		}
	}
	
	if(f==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
