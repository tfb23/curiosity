//    https://codeforces.com/problemset/problem/785/A


#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;
int i, n, tot=0;
string s;

int main()
{
	cin>>n;
	for (i=0; i<n; i++)
	{
		cin>>s;
		if(s[0]=='T') tot+=4;
		
		else if(s[0]=='C') tot+=6;
		
		else if(s[0]=='O') tot+=8;
		
		else if(s[0]=='D') tot+=12;
		
		else if(s[0]=='I') tot+=20;
	}
	cout<<tot<<endl;
}
