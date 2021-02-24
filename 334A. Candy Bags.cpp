//    https://codeforces.com/problemset/problem/334/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n;
	cin>>n;
	
	for(i=1; i<=(n*n)/2; i++)
	{
		cout<<i<<" "<<(n*n)-i+1<<endl;
	}
}
