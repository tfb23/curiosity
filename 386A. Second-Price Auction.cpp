//    https://codeforces.com/problemset/problem/386/A


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
const int N=12345;

int main()
{
	SIS;
	
	int i, n, p[N], j=0, m=0;
	
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &p[i]);
		if(m<p[i])
		{
			m=p[i];
			j=i;
		}
	}
	
	sort(p, p+n);
	printf("%d %d\n", ++j, p[n-2]);
	
	
	
}
