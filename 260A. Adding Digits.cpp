//    https://codeforces.com/problemset/problem/260/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, a, b, n, flag=0;
	
	cin>>a>>b>>n;
	for(i=0; i<10; i++)
	{
		if((a*10+i)%b==0) 
		{
			a=a*10+i; 
			flag=1; 
			break;
		}
	}
	if(!flag) cout<<-1<<endl;
	else 
	{
		cout<<a;
		for(i=0; i<n-1; i++)
		{
			cout<<0;
		}
		cout<<endl;
	}
}
