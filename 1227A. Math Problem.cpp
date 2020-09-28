//    https://codeforces.com/problemset/problem/1227/A


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
int t, n, x, y;

int main()
{
	SIS;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int l=0, r=inf;
		while(n--)
		{
			cin>>x>>y;
			if(x>l) l=x;
			if(y<r) r=y;
		}
		if(l<=r) cout<<0<<endl;
		else cout<<l-r<<endl;
	}
	return 0;
}
