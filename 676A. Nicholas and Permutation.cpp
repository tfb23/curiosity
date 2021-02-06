//    https://codeforces.com/problemset/problem/676/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, d, a, b;
	
	cin>>n;
	
	for(int i=1; i<=n; i++) 
	{
		cin>>d;
		if(d==1) a=i;
		else if(d==n) b=i;
	}
	cout<<max(max(n-b, b-1), max(n-a, a-1));
}
