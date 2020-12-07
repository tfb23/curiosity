//    https://codeforces.com/contest/1154/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int i, a[5];
	for(i=0; i<4; i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+4);
	
	for(i=0; i<3; i++)
	{
		cout<<a[3]-a[i]<<" ";
	}
}
