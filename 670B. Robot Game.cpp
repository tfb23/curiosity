//    https://codeforces.com/problemset/problem/670/B


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
const int N=1e5;

int main()
{
	SIS;
	
	int i, k, n, r, g, h, f=0;
	int a[N];
	cin>>n>>k;
	for(i=0; i<n ; i++) cin>>a[i];
	
	for(i=1; ; i++)
	{
		f=f+i;
		if(f>=k)
		{
			g=f-i;
			break;
		}
	}
	cout<<a[k-g-1];
}
