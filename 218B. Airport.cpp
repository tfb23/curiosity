//    https://codeforces.com/problemset/problem/218/B


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
const int maxn=12345;

int main()
{
	int n, m, a[maxn], tmp, c, min=0, max=0;
	cin>>n>>m;
	
	for (int i=0; i<m; i++)  cin>>a[i];
	
	sort(a, a+m);
	
	tmp=n; 
	
	for (int i=0; i<m; i++)
	{
		c=a[i];
		while(c&&tmp>0)
		{
			min+=c;
			c--;
			tmp--;
		}
		if(tmp<=0) break;
	}
	
	while (n)
	{
		max+=a[m-1];
		a[m-1]--;
		n--;
		sort(a, a+m);
	}
	cout<<max<<" "<<min;
	
}
