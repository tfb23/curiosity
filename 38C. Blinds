#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

const int N= 1e2 + 9;

int main()
{
	int n, m, a[N];
	cin>>n>>m;
	for (int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	int ans = 0; 
	for(int i=m; i<=100; i++)
	{
		int cnt=0; 
		for(int j=1; j<=n; j++)
		cnt+=a[j]/i;
		ans = max(ans, i*cnt); 
	}
	cout<<ans<<endl;
	return 0; 
}
