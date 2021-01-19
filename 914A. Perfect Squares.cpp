//    https://codeforces.com/problemset/problem/914/A


#include <bits/stdc++.h>
using namespace std;

const int N=-1234567;

int main()
{
	long long i, n, a, b=N, temp;
	
	cin>>n;
	while(n--)
	{
		cin>>a;
		temp=sqrt(a);
		if((temp*temp)!=a)
		{
			if(b<a) b=a;
		}
	}
	cout<<b<<endl;
}
