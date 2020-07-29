//  https://codeforces.com/contest/492/problem/B


#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
	int a[1000];
	int n,l;
	cin>>n>>l;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a, a+n);
	double ans=max(a[0], l-a[n-1]);
	for(int i=1; i<n; i++)
	{
		ans=max(ans,(a[i]-a[i-1])/2.0);
	}
	printf("%.10f\n", ans);
}
