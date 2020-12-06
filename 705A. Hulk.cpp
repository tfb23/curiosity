//    https://codeforces.com/problemset/problem/705/A


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
	for(i=1; i<n; i++)
	{
		if(i%2==1)
		{
			cout<<"I hate that ";
		}
		else 
		{
			cout<<"I love that ";
		}
	}
	
	if(n%2==1)
	{
		cout<<"I hate it\n";
	}
	if(n%2==0)
	{
		cout<<"I love it\n";
	}
}
