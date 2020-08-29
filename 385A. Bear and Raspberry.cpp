//    https://codeforces.com/problemset/problem/385/A


#include <bits/stdc++.h>
using namespace std;
const int N=105; 
int n, c, a[N];

int main()
{
	int ans = 0; 
	cin>>n>>c;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for (int i=1; i<n; i++)
	{
		ans = max(ans, a[i-1]-a[i]);
	}
	cout<<max(ans-c, 0);
}
