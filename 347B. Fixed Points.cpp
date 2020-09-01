//    https://codeforces.com/problemset/problem/347/B


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1[100005], a2[100005];
	memset (a2, -1, sizeof(a2));
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a1[i];
	}
	int ans=0;
	for (int i=0; i<n; i++)
	{
		if(i==a1[i])
		{
			ans++;
		}
		else
		{
			a2[a1[i]]=i;
		}
	}
	if (ans==n)
	{
		cout<<ans;
		return 0;
	}
	ans++;
	for (int i=0; i<n; i++)
	{
		if (i!=a1[i])
		{
			if (a2[a2[i]]==i)
			{
				ans++;
				break;
			}
		}
	}
	cout<<ans;
}
