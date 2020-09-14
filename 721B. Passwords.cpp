//    https://codeforces.com/problemset/problem/721/B


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
const int maxn=123;

bool cmp(string x, string y)
{
	return x.size()< y.size();
}

int main()
{
	int n, k; 
	string s[maxn], b;
	cin>>n>>k;
	
	for(int i=1; i<=n; i++) cin>>s[i];
	
	cin>>b;
	
	sort(s+1, s+n+1, cmp);
	
	int ans1=0, ans2=0; 
	for (int i=1; i<=n; i++)
	{
		if(s[i].size()< b.size()) ans1++;
		if(s[i].size()<= b.size() && s[i]!= b) ans2++;
	}
	
	cout<<1+ans1/k*5+ans1<<" "<< 1+ans2/k*5+ans2<<endl;
}
