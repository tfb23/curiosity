//    https://codeforces.com/problemset/problem/469/A


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#include <regex>
#define   pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;
const int N=1e5;

int main()
{
	SIS;
	
	int i, n, p, q, a[N], cnt=0;
	
	cin>>n>>p;
	for(i=0; i<p; i++)
	{
		cin>>a[i];
	}
	
	cin>>q;
	
	for(i=p; i<p+q; i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+(p+q));
	
	for(i=0; i<p+q; i++)
	{
		if(a[i]!=a[i+1])
		{
			cnt++;
		}
	}
	
	if(cnt==n)
	{
		puts("I become the guy.\n");
	}
	else 
	{
		puts("Oh, my keyboard!\n");
	}
}
