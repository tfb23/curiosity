//    https://codeforces.com/problemset/problem/27/A


#include <bits/stdc++.h>
using namespace std;

const int N=3200;
bool vis[N];

int main()
{
	int i, n, x;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cin>>x;
		vis[x]=true;
	}
	
	for(i=1; i<=3001; i++)
	{
		if(!vis[i])
		{
			cout<<i<<endl;
			break;
		}
	}
}
