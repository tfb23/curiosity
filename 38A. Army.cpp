//    https://codeforces.com/problemset/problem/38/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, a, b, sum=0, d[123];
	
	cin>>n;
	
	for(i=1; i<n; i++) cin>>d[i];
	
	cin>>a>>b;
	
	for(i=a; i<b; i++) sum+=d[i];
	
	cout<<sum<<endl;
	
}
