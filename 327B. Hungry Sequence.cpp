//    https://codeforces.com/problemset/problem/327/B


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
const int N=1e5;

int main()
{
	SIS;
	
	int i, n, m, t;
	while(cin>>n)
	{
		m=N+n;
		t=1;
		for(i=N; i<m; i++)
		{
			if(t!=n)
			{
				cout<<i<<" ";
				t++;
			}
			else  cout<<i<<endl;
		}
	}
}
