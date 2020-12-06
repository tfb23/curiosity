//    https://codeforces.com/problemset/problem/141/A


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
	
	int i, l1, l3, cnt=0;
	char s1[N], s2[N], s3[N];
	
	cin>>s1>>s2>>s3;
	
	strcat(s1, s2);
	l1=strlen(s1);
	l3=strlen(s3);
	
	sort(s1, s1+l1);
	sort(s3, s3+l3);
	
	if(l1!=l3)
	{
		cout<<"NO\n";
		return 0;
	}
	else
	{
		for(i=0; i<l1; i++)
		{
			if(s1[i]==s3[i])
			{
				cnt++;
			}
		}
	}
	if(cnt==l1)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}
