//    https://codeforces.com/problemset/problem/122/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, a[13] = {4,7,44,47,74,77,444,447,474,477,744,747,777};
	
	cin>>n;
	for(i=0; i<13; i++)
	{
		if(n%a[i]==0)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
}
