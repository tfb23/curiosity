//    https://codeforces.com/problemset/problem/798/A


#include <bits/stdc++.h>
using namespace std;

const int N=1e5;

int main()
{
	int i, l, cnt=0;
	char s[N];
	
	cin>>s;
	l=strlen(s);
	
	for(i=0; i<l; i++)
	{
		if(s[i]!=s[l-i-1]) cnt++;
	}
	if(l & 1 & cnt==0) cnt+=2;
	cout<<(cnt==2? "YES":"NO")<<endl;
}
