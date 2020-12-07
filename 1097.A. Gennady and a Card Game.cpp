//    https://codeforces.com/problemset/problem/1097/A


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
	
	char suit[10];
	cin>>suit;
	
	int i;
	bool flag=0; 
	
	string s[15];
	for(i=0; i<5; i++)
	{
		cin>>s[i];
	}
	
	for(i=0; i<5; i++)
	{
		if(suit[0]==s[i][0] || suit[1]==s[i][1])
		{
			flag=1;
		}
	
	}
	if(flag)
	{
		puts("YES\n");
	}
	else
	{
		puts("NO\n");
	}
}
