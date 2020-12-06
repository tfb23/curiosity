//    https://codeforces.com/problemset/problem/546/A


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
	
	int k, n, w, sum=0, a[N];
	cin>>k>>n>>w;
	
	for(int i=1; i<=w; i++)
	{
		a[i]=i*k;
		sum+=a[i];
	}
	if(sum-n>0)
	{
		cout<<sum-n<<endl;
	}
	else 
	{
		cout<<0<<endl;
	}
}
