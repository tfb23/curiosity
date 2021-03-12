//    https://codeforces.com/problemset/problem/743/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, a, b;
	
	cin>>n>>a>>b;
	
	char s[1000005];
	
	for(i=1; i<=n; i++)
	{
		cin>>s[i];
	}
	
	if(s[a]==s[b]) cout<<0<<endl;
	else cout<<1<<endl;
}
