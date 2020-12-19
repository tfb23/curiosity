//    https://codeforces.com/contest/1146/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, l, cnta=0, cnto=0;
	
	char s[123];
	cin>>s;
	 
	l=strlen(s);
	
	for(i=0; i<l; i++)
	{
		if(s[i]=='a')
		{
			cnta++;
		}
		else
		{
			cnto++;
		}
	}
	
	int r;
	r=min(l, (2*cnta)-1);
	cout<<r<<endl;
}
