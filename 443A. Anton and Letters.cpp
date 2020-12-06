//    https://codeforces.com/problemset/problem/443/A


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
	
	int i, l, cnt=0;
	char s[1234];
	gets(s);
	
	l=strlen(s);
	
	sort(s, s+l);
	
	for(i=0; i<l-1; i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			cnt++;
			if(s[i]==s[i+1])
			{
				cnt--;
			}
		}
	}
	cout<<cnt<<endl;

}
