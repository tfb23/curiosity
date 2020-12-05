//    https://codeforces.com/contest/567/problem/A


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
	
	int n, i, a[N];
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
		if(i==0)
		{
			cout<<a[i+1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
		}
		if(i==n-1)
		{
			cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
		}
		if(i!=0 && i!=n-1)
		{
			 int minn= min (a[i+1]-a[i], a[i]-a[i-1]);
			 int maxx= max (a[i]-a[0], a[n-1]-a[i]);
			 cout<<minn<<" "<<maxx<<endl;
		}
	}
}
