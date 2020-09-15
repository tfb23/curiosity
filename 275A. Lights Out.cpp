//    https://codeforces.com/problemset/problem/275/A


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;
const int maxn=100;

int main()
{
	int a[maxn][maxn], res;
	
	for (int i=1; i<=3; i++)
	{
		for (int j=1; j<=3; j++)
		{
			cin>>a[i][j];
		}
	}
	
	for (int i=1; i<=3; i++)
	{
		for (int j=1; j<=3; j++)
		{
			res=(a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])%2;
			
			if (res==0) cout<<"1";
			if (res==1) cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}
