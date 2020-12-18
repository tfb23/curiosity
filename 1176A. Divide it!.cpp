//    https://codeforces.com/contest/1176/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long n;
		cin>>n;
		
		int ans=0;
		
		while(n%2==0)
		{
			n/=2;
			ans++;
		}
		while(n%3==0)
		{
			n/=3;
			ans+=2;
		}
		while(n%5==0)
		{
			n/=5;
			ans+=3;
		}
		if(n==1)
		{
			cout<<ans<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}
