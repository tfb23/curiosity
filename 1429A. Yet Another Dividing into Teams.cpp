//      https://codeforces.com/problemset/problem/1249/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, q, n;
	cin>>q;
	while(q--)
	{
		cin>>n;
		int a[n+5], cnt=1;
		
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		
		sort(a, a+n);
		
		for(i=0; i<n-1; i++)
		{
			if(a[i+1]-a[i]==1)
			{
				cnt=2;
			}
		}
		cout<<cnt<<endl;
	}

}
