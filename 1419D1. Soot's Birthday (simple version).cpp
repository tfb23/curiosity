//    https://codeforces.com/problemset/problem/1419/D1


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
	
	long long i, j, m, n;
	cin>>n;
	long long a[n+2];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+n);
	long long v=0; 
	long long r[n+2];
	for(i=1; i<n; i+=2)
	{
		r[i]=a[v++];
		
	}
	for(j=0; j<n; j+=2)
	{
		r[j]=a[v++];
		
	}
	long long c=0;
	for(i=1; i<n-1; i++) 
	{
		if(r[i+1]>r[i] && r[i-1]>r[i])
		c++;
	}
	cout<<c<<endl;
	for(i=0; i<n; i++)
	{
		cout<<r[i]<<" ";
	}
	cout<<endl;
}
