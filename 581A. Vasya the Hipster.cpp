//    https://codeforces.com/problemset/problem/581/A


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
	
	int i, a, b;
	cin>>a>>b;
	
	if(a<b)
	{
		cout<<a<<" "<<(b-a)/2<<endl;
	}
	if(b<a)
	{
		cout<<b<<" "<<(a-b)/2<<endl;
	}
	if(b==a)
	{
		cout<<b<<" "<<0<<endl;
	}
}
