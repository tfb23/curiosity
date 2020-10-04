//    https://codeforces.com/problemset/problem/496/A


#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;
const int N=10005;
int main()
{
	int i, n, a[N], dp, mindp=100001, d, max=0;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=0; i<n-1; i++)
	{
		d=a[i+1]- a[i];
		if(d>max) max=d;
	}
	for(i=0; i<n-2; i++)
	{
		dp=a[i+2]-a[i];
		if(dp<mindp) mindp=dp;
	}
	if(mindp>max)
	{ 
		max=mindp;
	}
	cout<<max<<endl;
}
	
