//    https://codeforces.com/problemset/problem/702/A


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=1e5;
int a[N];

int main()
{
	int n;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	int maxn=0; 
	int s=0;
	for (int i=0; i<n-1; i++)
	{
		if(a[i]<a[i+1])
		{
			s++;
			maxn=max(maxn, s);
		}
		else 
		{
			s=0;
		}
	}
	cout<<maxn+1<<endl;
	return 0;
}
