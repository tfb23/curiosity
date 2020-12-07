//    https://codeforces.com/problemset/problem/996/A


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
	
	int i, n, ans=0, a[6]={100, 20, 10, 5, 1};
	cin>>n;
	for(i=0; i<5; i++)
	{
		ans+=n/a[i];
		n=n%a[i];
	}
	cout<<ans<<endl;
}
