//    https://codeforces.com/problemset/problem/1462/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n+5];
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		
		if(n%2==0)
		{
			for(i=0; i<n/2; i++)
			{
				cout<<a[i]<<" "<<a[n-i-1]<<" ";
			}
		}
		else
		{
			for(i=0; i<n/2; i++)
			{
				cout<<a[i]<<" "<<a[n-i-1]<<" ";
			}
			cout<<a[n/2];
		}
		cout<<endl;
	}
}
