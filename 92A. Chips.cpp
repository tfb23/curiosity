//    https://codeforces.com/problemset/problem/92/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, m;
	
	cin>>n>>m;
	
	i=1; 
	
	while(1)
	{
		if(m-i>=0)	m=m-i;
		
		else 
		{
			cout<<m<<endl;
			break;
		}
		
		i++;
		
		if(i==n+1) i=1;
	}
}
