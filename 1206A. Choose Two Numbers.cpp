//    https://codeforces.com/contest/1206/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, m, n, a[234], b[234]; 
	
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	cin>>m;
	for(i=0; i<m; i++)
	{
		cin>>b[i];
	}
	
	
	sort(a, a+n);
	sort(b, b+m);
	
	cout<<a[n-1]<<" "<<b[m-1];
}
