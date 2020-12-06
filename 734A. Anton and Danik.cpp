//    https://codeforces.com/problemset/problem/734/A


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
	
	int i, n, na=0, nd=0;
	cin>>n;
	
	string s;
	cin>>s;
	
	for(i=0; i<n; i++)
	{
		if(s[i]=='A')
		{
			na++;
		}
		else
		{
			nd++;
		}
	}
	if(na>nd)
	{
		puts("Anton\n");
	}
	if(na<nd)
	{
		puts("Danik\n");
	}
	if (na==nd)
	{
		puts("Friendship\n");
	}
}
