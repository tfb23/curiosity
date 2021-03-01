//    https://codeforces.com/problemset/problem/129/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, cnt=0, tot=0;
	cin>>n;
	int a[n];
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
		tot+=a[i];
	}
	
	for(i=0; i<n; i++)
	{
		if((tot-a[i])%2==0) cnt++;
	}
	
	cout<<cnt<<endl;
	
	
}
