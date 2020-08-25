//   https://codeforces.com/problemset/problem/439/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, d, t, s=0;
	cin>>n>>d;
	
	for (int i=0; i<n; i++)
	{
		cin>>t;
		s+=t;
	}
	
	s+=(n-1) * 10;
	
	if(s>d)
	{
		cout<<"-1"<<endl;
	}
	else 
	{
		int tmp = d-s;
		printf("%d\n", n*2-2+ tmp/5);
	}
	return 0;
}
