//    https://codeforces.com/problemset/problem/805/B



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
	int i, n; 
	cin>>n;
	for(i=1; i<=n; i++)
	{
		if(i%4==1 || i%4==2) cout<<"a";
		else if(i%4==0 || i%4==3)
		cout<<"b";
	}
	cout<<endl;

}
