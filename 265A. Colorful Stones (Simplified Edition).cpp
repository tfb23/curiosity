//    https://codeforces.com/problemset/problem/265/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, j;
	
	char s[55], t[55];
	cin>>s>>t;
	
	for(i=0, j=0; i<strlen(t); i++)
	{
		if(t[i]==s[j])
		{
			j++;
		}
	}
	cout<<j+1<<endl;
}
