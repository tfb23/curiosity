//      https://codeforces.com/problemset/problem/1150/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, m, r, minn=1234, maxx=0, s, b;
	
	cin>>n>>m>>r;
	
	for(i=0; i<n; i++)
	{
		cin>>s;
		minn=min(minn, s);
	}
	
	for(i=0; i<m; i++)
	{
		cin>>b;
		maxx=max(maxx, b);
	}
	
	if(minn>=maxx) cout<<r<<endl;
	
	else cout<<(r/minn)*maxx+r%minn<<endl;
	
}
