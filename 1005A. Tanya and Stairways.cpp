//    https://codeforces.com/problemset/problem/1005/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, a[1234], cnt=0;
	
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]==1)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	
	for(i=1; i<=n-1; i++)
	{
		if(a[i]==1)
		{
			cout<<a[i-1]<<" ";
		}
	}
	cout<<a[n-1];
}
