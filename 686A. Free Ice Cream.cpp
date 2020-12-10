//    https://codeforces.com/problemset/problem/686/A


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
const int N=1e9;

int main()
{
	SIS;
	
	long long int i, x, dis, sum=0, n;
	char s;
	
	cin>>n>>x;
	int a[n+5];
	
	sum=x;
	dis=0;
	
	for(i=0; i<n; i++)
	{
		cin>>s>>x;
		
		if(s=='+')
		{
			sum+=x;
		}
		else if(sum>=x)
		{
			sum-=x;
		}
		else
		{
			dis++;
		}
		
	}
	cout<<sum<<" "<<dis<<endl;
}
