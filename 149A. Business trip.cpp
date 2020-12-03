//    https://codeforces.com/contest/149/problem/A


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

int main()
{
	SIS;
	
	int i, n=12, k, cnt=0, a[16], sum=0;
	bool flag=0;
	
	cin>>k;
	
	for(i=0; i<n; i++) cin>>a[i];
	
	sort(a, a+n);
	
	for(i=n-1; i>=0; i--)
	{
		if(k==0) 
		{
			cout<<0<<endl;
			flag=1;
			break;
		}
		sum+=a[i];
		cnt++;
		if(sum>=k)
		{
			cout<<cnt<<endl;
			flag=1;
			break;
		}
	}
	if(!flag) cout<<-1<<endl;
}
