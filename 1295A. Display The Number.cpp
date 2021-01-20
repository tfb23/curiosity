//    https://codeforces.com/problemset/problem/1295/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, t, n, l;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		l=n/2;
		
		if(n%2==1) 
		{
			cout<<7;
			for(i=1; i<l; i++) cout<<1;
		}
		
		else
		{
			for(i=0; i<l; i++) cout<<1;
		}
		cout<<endl;
	}
}
