//    https://codeforces.com/problemset/problem/1257/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, t, n, a, b, x;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>a>>b;
		
		int r=min(n-1, abs(a-b)+x);
		
		cout<<r<<endl;
	}
}
