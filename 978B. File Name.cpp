//    https://codeforces.com/problemset/problem/978/B


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
	
	int i, n, cnt=0;
	cin>>n;
	
	char s[123];
	cin>>s;
	
	for(i=0; i<n; i++)
	{
		if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
		cnt++;
	}
	cout<<cnt<<endl;
}
