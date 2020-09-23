//    https://codeforces.com/problemset/problem/466/C


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>

using namespace std;
const long long N=5e5;
long long i, n, a[N];

int main()
{
	cin>>n;
	long long s=0, ans=0;
	for (i=0; i<n; i++)
	{
		cin>>a[i];
		if(i>=1)
		{
			a[i]=a[i]+a[i-1];
		}
	}
	for(i=0; i<n-1; i++)
	{
		if(a[i]*3==a[n-1]*2)  ans+=s;
		if(a[i]*3==a[n-1]) s++;
	}
	cout<<ans;
}
