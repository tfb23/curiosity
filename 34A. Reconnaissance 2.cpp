//    https://codeforces.com/problemset/problem/34/A


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
	
	int i, n, minn=inf, pos=0;
	
	cin>>n;
	int a[n];
	for(i=1; i<=n; i++) cin>>a[i];
	
	for(i=1; i<n; i++)
	{
		if(abs(a[i]-a[i+1])<minn)
		{
			minn=abs(a[i]-a[i+1]);
			pos=i;
		}
	}
	if(abs(a[n]-a[1])<minn)
	{
		cout<<n<<" 1"<<endl;
	}
	else 
	cout<<pos<<" "<<pos+1<<endl;
}
