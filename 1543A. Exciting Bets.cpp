//    https://codeforces.com/contest/1543/problem/A



#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a, b; 
		cin>>a>>b;
		
		if(a==b) 
		{
		    cout<<0<<" "<<0<<endl;
		}
		else 
		{
	    	long long d, ans;
	    	d=abs(a-b);
		    ans=min(a%d, d-a%d);
	
	    	cout<<d<<" "<<ans<<endl;
    	}
	}
}
