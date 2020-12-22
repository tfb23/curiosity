//      https://codeforces.com/problemset/problem/992/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long i, j, n, k;
	
	set<long long> s;
	
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cin>>j;
		
		if(j!=0)  s.insert(j);
	}
	
	cout<<s.size()<<endl;
	
}
