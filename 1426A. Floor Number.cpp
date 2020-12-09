//    https://codeforces.com/problemset/problem/1426/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double n, x, ans;
		cin>>n>>x;
		if(n<=2)
		{
			cout<<1<<endl;
		}
		else
		{
			ans=ceil((n-2)/x);
			cout<<ans+1;
		}
	}
}
