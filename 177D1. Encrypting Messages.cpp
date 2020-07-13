#include <bits/stdc++.h>
using namespace std;
long long a[100002];
long long b[100002];
int n, m, c;
int main()
{
	cin>>n>>m>>c;
	for (int i=0; i<n; i++)
	cin>>a[i];
	for ( int i=0; i<m; i++)
	cin>>b[i];
	for (int i=0; i<=n-m; i++)
	for (int j=i; j<i+m; j++)
	a[j]+=b[j-i];
	for(int i=0; i<n; i++)
	cout <<a[i]%c<<" ";
	return 0;
}
