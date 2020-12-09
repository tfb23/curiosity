//    https://codeforces.com/problemset/problem/1196/A


#include <bits/stdc++.h>
using namespace std;

int main()
{

	long long int i, q, a, b, c, sum=0, res=0;
	
	cin>>q;
	while(q--)
	{
		cin>>a>>b>>c;
		
		sum=a+b+c;
		cout<<sum/2<<endl;
	}
}
