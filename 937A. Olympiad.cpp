//    https://codeforces.com/problemset/problem/937/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, a[6789], cnt=1;
	
	cin>>n;
	
	for(i=0; i<n; i++) cin>>a[i];
	
	sort(a, a+n);
	
	for(i=0; i<n-1; i++) 
	{
		if(a[i] && a[i]!=a[i+1]) cnt++;
	}
	cout<<cnt<<endl;
}
