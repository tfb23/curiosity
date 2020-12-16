//    https://codeforces.com/problemset/problem/1451/A


#include <bits/stdc++.h>
using namespace std;

const int N=1e5;

int main()
{
	int t, n, x;
	
	cin>>t;
	while(t--)
	{
		cin>>x;
		
		if(x==1)
		{
			cout<<0<<endl;
		}
		else if(x==2)
		{
			cout<<1<<endl;
		}
		else if(x==3)
		{
			cout<<2<<endl;
		}
		else if(x>3)
		{
			if(x%2==0)
			{
				cout<<2<<endl;
			}
			else if(x%2!=0)
			{
				cout<<3<<endl;
			}
		}
	}
}
