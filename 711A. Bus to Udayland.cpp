//      https://codeforces.com/problemset/problem/711/A


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
	
	
	int i, j, sum=0, n;
	
	cin>>n;
	
	char a[n][5];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<5; j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<4; j++)
		{
			if(a[i][j]=='O' && a[i][j+1]=='O')
			{
				sum=1;
				a[i][j]=a[i][j+1]='+';
				break;
			}
		}
		if(sum==1)
		{
			break;
		}
	}
	if(sum==1)
	{
		cout<<"YES"<<endl;
		for(i=0; i<n; i++)
		{
			for(j=0; j<5; j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
	else 
	{
		cout<<"NO"<<endl;
	}
}
