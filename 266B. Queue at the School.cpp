//      https://codeforces.com/problemset/problem/266/B


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

int main()
{
	SIS;
	
	int i, j, x, n;
	char s[55];
	scanf("%d%d", &n, &x);
	scanf("%s", s);
	for(j=0; j<x; j++)
	{
		for(i=0; i<n-1; i++)
		{
			if(s[i]=='B' && s[i+1]=='G') 
			{
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
	}
	printf("%s\n", s);
}
