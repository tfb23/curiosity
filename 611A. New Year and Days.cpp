//    https://codeforces.com/problemset/problem/611/A


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
	
	int n;
	char a[20], b[20];
	cin>>n>>a>>b;
	
	if(b[0]=='w')
	{
		if (n==5||n==6) cout<<53<<endl;
		else cout<<52<<endl;
	}
	else
	{
		if(n==30) cout<<11<<endl;
		else if(n==31) cout<<7<<endl;
		else cout<<12<<endl;
	}
	
}
