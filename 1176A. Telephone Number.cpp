//    https://codeforces.com/problemset/problem/1167/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, t;
	cin>>t;
	
	char s[123];
	
	while(t--)
	{
		cin>>n;
		cin>>s;
		int pos= n;
		
		for(i=0; i<n; i++)
		{
			if(s[i]=='8')
			{
				pos=i;
				break;
			}
		}
		if(n-pos>=11)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}
