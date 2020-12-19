//    https://codeforces.com/problemset/problem/867/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n;
	cin>>n;
	
	char s[123];
	cin>>s;
	
	bool flag=0;
	
	for(i=0; i<n; i++)
	{
		if(s[0]=='S' && s[n-1]=='F')
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
}
