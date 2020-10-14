//		https://codeforces.com/problemset/problem/822/A


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
	
	int a, b, ans=1;
	cin>>a>>b;
	for(int i=1; i<=min(a, b); i++)
	{
		ans*=i;
	}
	cout<<ans;
}
