//      https://codeforces.com/contest/456/problem/B


#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;
const int maxn=1e+5;
char s[maxn];

int main()
{
	scanf("%s", s);
	int len=strlen(s);
	
	int ans = 0;
	for(int i=0; i<len; i++)
	{
		ans=(ans*10+s[i]- '0')%4;
	}
	printf("%d\n", ans==0?4:0);
}
