//    https://codeforces.com/problemset/problem/432/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, a[2005];
	cin>>n>>k;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int total=0;
	for(int i=0; i<n; i++)
	{
		if (a[i]+k<=5)
		total++;
	}
	cout<<total/3<<endl;
}
