//    https://codeforces.com/problemset/problem/935/A


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int i, n, cnt=0;
	
	cin>>n;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
