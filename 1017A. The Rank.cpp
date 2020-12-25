//    https://codeforces.com/problemset/problem/1017/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, a, b, c, d;
	
	int ans=1;
	
	cin>>n;
	cin>>a>>b>>c>>d;
	int S;
	S=a+b+c+d;
	
	for(i=2; i<=n; i++)
	{
		cin>>a>>b>>c>>d;
		if(a+b+c+d> S)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
}    
