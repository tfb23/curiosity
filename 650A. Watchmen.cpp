//    https://codeforces.com/problemset/problem/650/A


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

using namespace std;
map<int, int>m1, m2;
map<pair<int, int>,int>m;
long long i, n, x, y, ans;

int main()
{
	cin>>n;
	for (i=0; i<n; i++)
	{
		cin>>x>>y;
		ans+=m1[x]++;
		ans+=m2[y]++;
		ans-=m[make_pair(x, y)]++;
	}
	cout<<ans;
}
