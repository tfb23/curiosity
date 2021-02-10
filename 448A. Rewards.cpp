//    https://codeforces.com/contest/448/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a1, a2, a3, b1, b2, b3, n;
	
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	
	int na, nb;
	
	na=(a1+a2+a3+4) /5;
	nb=(b1+b2+b3+9) /10;
	
	cout<<(na+nb<=n? "YES":"NO")<<endl;
	
}
