//    https://codeforces.com/problemset/problem/1141/B



#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long i, n, cnt=0, ans=0;
	
	cin>>n;
	long long a[n+n+5];
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
		a[i+n]=a[i];
	}
	
	for(i=0; i<n+n; i++)
	{
		if(a[i]==1) cnt++;
		else cnt=0;
		ans=max(ans, cnt);
	}
	
	cout<<ans<<endl;

}
