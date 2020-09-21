//    https://codeforces.com/problemset/problem/701/A


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int v[123];
bool vis[123];

int main()
{
	int n, sum=0, ave, i, j;
	cin>>n;
	
	for (i=1; i<=n; i++)
	{
		cin>>v[i];
		sum+=v[i];
	}
	
	ave=2*sum/n;
	
	for (i=1; i<=n; i++)
	{
		if(!vis[i])
		{
			for (j=i+1; j<=n; j++)
			{
				if(!vis[j]&&v[i]+v[j]==ave)
				{
					cout<<i<<" "<<j<<endl;
					vis[i]=vis[j]=1;
					break;
				}
			}
		}
	}
}
