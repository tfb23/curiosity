//    https://codeforces.com/contest/887/problem/A


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
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;

int main()
{
	SIS;
	string s;
	int cnt, flag;
	
	while(cin>>s)
	{
		flag=0; 
		cnt=0;
		for(int i=s.length()-1; i>=0; i--)
		{
			if(s[i]=='0')
			cnt++;
			if(cnt>=6 && s[i]=='1')
			{
				flag=1;
				break;
			}
		}
		printf("%s\n", flag?"yes":"no");
	}
}
