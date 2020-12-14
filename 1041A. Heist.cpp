//    https://codeforces.com/contest/1041/problem/A


#include <bits/stdc++.h>
using namespace std;

const int N=1e5;

int main()
{
	int i, n, mn=1e9, mx=0, x;
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cin>>x;
		mn=min(mn, x);
		mx=max(mx, x);
	}
	cout<<max(0, (mx-mn)-n+1);
}
