//    https://codeforces.com/problemset/problem/492/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i=0, n, sum=0;
	cin>>n;
	
	while(1)
	{
		i++;
		sum=i*(i+1)*(i+2)/6;
		if(sum>n)
		{
			break;
		}
	}
	cout<<i-1<<endl;
}
