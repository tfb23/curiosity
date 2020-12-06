//    https://codeforces.com/problemset/problem/271/A


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
	
	int i, n;
	cin>>n;
	if(n>=1000 && n<=9000)
	{
		for(i=0; i<n; i++)
		{
			n+=1;
			
			int a, b, c, d;
			
			a=n%10;
			b=n/10%10;
			c=n/100%10;
			d=n/1000;
			
			if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
			{
				cout<<n;
				break;
			}
		}
	}
}
