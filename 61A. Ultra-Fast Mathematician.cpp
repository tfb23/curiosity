//     https://codeforces.com/problemset/problem/61/A


#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main()

{
	char s1[105];
	char s2[105];
	
	cin>>s1; 
	cin>>s2;
	
	for(int i=0; i<strlen(s1); i++)
	{
		if(s1[i] != s2[i])
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
}
