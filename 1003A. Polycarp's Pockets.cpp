//    https://codeforces.com/problemset/problem/1003/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, maxv, cnt;
	cin>>n;
	int a[n+5];
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+n);
	
	cnt=1;
	maxv=1;
	
	for(i=0; i<n-1; i++)
	{
		if(a[i]==a[i+1])
	    {
	    	cnt++;
	    }
	    else
	    {
	    	cnt=1;
	    }
	    
	    
	    maxv=max(maxv, cnt);
	}
	cout<<maxv<<endl;
}
