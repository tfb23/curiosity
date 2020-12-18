//    https://codeforces.com/problemset/problem/1064/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, a[123];
	
	for(i=0; i<3; i++)
	{
		cin>>a[i];
	}
	
	sort(a, a+3);
  
	if(a[0]+a[1]>a[2])
	{
		cout<<0<<endl;
	}
	else 
	{
		cout<<a[2]-a[0]-a[1]+1<<endl;
	}
}
