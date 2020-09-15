//    https://codeforces.com/problemset/problem/556/A


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int main()
{
	int n, cnt1=0, cnt2=0;
	cin>>n;
	
	char a;
	
	for(int i=0; i<n; i++)
	{
		cin>>a;
		if (a=='0') cnt1++;
		else cnt2++;
	}
	
	if (cnt1< cnt2) swap(cnt1, cnt2);
	cout<<cnt1-cnt2<<endl;
	return 0;
}
