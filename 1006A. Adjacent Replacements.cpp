//    https://codeforces.com/problemset/problem/1006/A


#include <bits/stdc++.h>
using namespace std;

const int N=1e5;

int main()
{
	int i, n, a[N];
	
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]-1<<" ";
		}
		else 
		{
			cout<<a[i]<<" ";
		}
	}
}
