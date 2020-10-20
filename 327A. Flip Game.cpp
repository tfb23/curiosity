//    https://codeforces.com/problemset/problem/327/A


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
const int N=2e5;
int n, a[N], cnt=0, dp[N];

int main()
{
	SIS;
	
	memset (dp, 0, sizeof(dp));
	cin>>n;
	for(int i=0; i<n; i++)
	{
		int c;
		cin>>c;
		if(c==1)
		{
			a[i]=-1;
			cnt++;
		}
		else
		{
			a[i]=1;
		}
	}
	dp[0]=a[0];
	int mx_c=a[0];
	for(int i=1; i<n; i++)
	{
		dp[i]=max(dp[i-1]+a[i], a[i]), mx_c=max(mx_c, dp[i]);
		
	}
	cout<<mx_c+cnt;

}
