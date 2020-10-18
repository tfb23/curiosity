//    https://codeforces.com/problemset/problem/71/A


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
	
	int n, l;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int l;
		l=s.length();
		if(l<11) cout<<s<<endl;
		else cout<<s[0]<<l-2<<s[l-1]<<endl;
	}
	
}
