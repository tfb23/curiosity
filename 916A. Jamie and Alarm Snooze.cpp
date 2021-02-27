//    https://codeforces.com/problemset/problem/916/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, h, m, ans=0;
	while(cin>>x)
	{
		cin>>h>>m;
		if(m%10==7 || h%10==7)
		{
			cout<<"0";
		}
		else
		{
			while(m%10!=7 && h%10!=7)
			{
				m-=x;
				ans++;
				if(m<0)
				{
					m+=60, h--;
					if(h<0)
					{
						h+=24;
					}
				}
			}
			cout<<ans<<endl;
		}
	}
}
