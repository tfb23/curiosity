//    https://codeforces.com/contest/139/problem/A


#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;
const int maxn=12;

int n, a[maxn], i, sum=0;

int main()
{
	cin>>n;
	for(i=0; i<7; i++) cin>>a[i];
	
	for(i=0; sum<n; i++) sum+=a[i%7];
	
	if(i%7==0) puts("7");
	else cout<<i%7<<endl;
}
