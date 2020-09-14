//    https://codeforces.com/problemset/problem/545/C


#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;
const long long maxn= 1000005;

int main()
{
	long long n, x[maxn], h[maxn]; 
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>x[i]>>h[i];
	}
	if(n>2)
	{
		int ans=2; 
		for (int i=1; i<n-1; i++)
		{
			if(x[i]-h[i]>x[i-1])
			{
				ans++;
			}
			else if(x[i]+h[i]<x[i+1])
			{
				ans++;
				x[i]+=h[i];
			}
		}
		cout<<ans<<endl;
	}
	else 
	{
		cout<<n<<endl;
	}
}
