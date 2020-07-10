#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
 
using namespace std;
 
int main()
{
	int a, b, i;
	cin>>a;
	for ( i=1; i<=20; i++)
	{
		b=a+i;
		if (b<0)
		{
			b=-b;
		}
		while (b>0)
		{
			if (b%10==8)
			{
				break;
			}
			else 
			{
				(b/=10);
			}
		}
		if (b>0)
		{
			break;
		}
	}
	cout <<i<<endl;
	return 0;
}
