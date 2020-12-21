//    https://codeforces.com/problemset/problem/146/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, sum1=0, sum2=0;
	char s[55];
	
	cin>>n>>s;
	
	bool flag=0; 
	
	for(i=0; i<n/2; i++)
	{
		if(s[i]!='4' && s[i]!='7')
		{
			flag=1;
		}
		sum1+=s[i]-'0';
	}
	
	for(i=n/2; i<n; i++)
	{
		if(s[i]!='4' && s[i]!='7')
		{
			flag=1; 
		}
		sum2+=s[i]-'0';
	}
	
	if(flag==1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		if(sum1==sum2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
