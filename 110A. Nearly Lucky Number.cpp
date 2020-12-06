//    https://codeforces.com/problemset/problem/110/A


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
#include <regex>
#define   pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;
const int N=1e5;

int main()
{
	SIS;
	
	int i, l, cnt=0;
	char s[25];
	
	scanf("%s", s);
	
	l=strlen(s);
	
	for(i=0; i<l; i++)
	if(s[i]=='4' || s[i]=='7')
	{
		cnt++;
	}
	
	if(cnt==4 || cnt==7)
	{
		puts("YES\n");
	}
	else 
	{
		puts("NO\n");
	}
}
