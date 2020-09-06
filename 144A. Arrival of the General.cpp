//    https://codeforces.com/problemset/problem/144/A


#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxn=105;
int main()
{
	int n, a[maxn], least=0, largest=0;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for (int i=1; i<n; i++)
	{
		if(a[least]>=a[i])
		{
			least=i;
		}
		else if(a[largest]<a[i])
	    {
	    	largest=i;
	    }
	}
	if(largest>least)
	{
		cout<<largest+n-1-least-1;
	}
	else if(largest==least)
	{
		cout<<"0";
	}
	else
	{
		cout<<largest+n-1-least;
	}
}
