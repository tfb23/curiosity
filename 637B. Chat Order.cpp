//    https://codeforces.com/problemset/problem/637/B


#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
string s[maxn];
map<string, int>m;
int main()
{
	int n;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>s[i];
	}
	for (int i=n-1; i>=0; i--)
	{
		if(!m[s[i]])
		{
			cout<<s[i]<<endl;
			m[s[i]]=1;
		}
	}
}
