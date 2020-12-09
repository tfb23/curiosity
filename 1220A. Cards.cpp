//    https://codeforces.com/problemset/problem/1220/A


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
	
	int i, n;
	cin>>n;
	
	char s[1234];
	cin>>s;
	
	int zero=0, one=0;
	
	for(i=0; i<n; i++)
	{
		if(s[i]=='z')
		{
			zero++;
		}
		if(s[i]=='n')
		{
			one++;
		}
	}
	
	while(one)
	{
		cout<<1<<" ";
		one--;
	}
	
	while(zero)
	{
		cout<<0<<" ";
		zero--;
	}
	
	cout<<endl;
}
