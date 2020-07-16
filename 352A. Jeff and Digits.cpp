#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n, s[10005], a=0, b=0;

int main()
{
	cin>>n; 
	for(int i=0; i<n; i++)
	{
		cin>>s[i];
		if(s[i]==5)
		a++;
	}
	b=n-a;
	a/=9;
	if(a!=0&&b!=0)
	{
		for(int i=0; i<a; i++)
		cout<<"555555555";
		for(int i=0; i<b; i++)
		cout<<"0";
	}
	else
	{
		if (b==0)
		cout<<"-1";
		else
		cout<<"0";
	}
}
