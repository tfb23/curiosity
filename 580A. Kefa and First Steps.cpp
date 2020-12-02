//    https://codeforces.com/problemset/problem/580/A


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
#define pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;
const int N=1e5;

int main()
{
	SIS;
	
	int i, n, a[N], l=1, m=1;
	
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<n; i++)
	{
		if(a[i]>=a[i-1])
		{
			l++;
		}
		else 
		{
			l=1;
		}
		if(l>m)
		{
			m=l;
		}
	}
	printf("%d\n", m);
}
