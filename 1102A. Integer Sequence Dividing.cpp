//    https://codeforces.com/problemset/problem/1102/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	long long sum=n*(n+1)*1ll/2;
	cout<<(sum & 1)<<endl;
}
