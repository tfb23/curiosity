#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
int n, i, j;
long long a[5], b[5], p[55], ans;

int main()
{
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>p[i];
	}
	for(int i=0; i<5; i++)
	{
		cin>>a[i];
	}
	for(i=0; i<n; i++)
	{
		ans+=p[i];
		for(j=4; j>=0; j--)
		{
			b[j]+=ans/a[j];
			ans%=a[j];
		}
	}
	for(i=0; i<4; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<b[4]<<endl;
	cout<<ans<<endl;
	return 0;
}
