//    https://codeforces.com/problemset/problem/268/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, n, h[31], a[31], cnt=0;
	
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>h[i]>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[j]==h[i])
			{
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
