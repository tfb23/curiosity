//    https://codeforces.com/problemset/problem/1475/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t, n;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		
		if(ceil(log2(n))==floor(log2(n)))
		{
			cout<<"NO"<<endl;
		}
		else 
		{
			cout<<"YES"<<endl;
		}
	}
}
