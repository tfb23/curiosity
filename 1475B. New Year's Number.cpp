//    https://codeforces.com/problemset/problem/1475/B


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		int cnt2021=n%2020;
		
		int cnt2020=(n-cnt2021)/2020-cnt2021;
		
		if(cnt2020>=0 && 2020 * cnt2020 + 2021 * cnt2021==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
