#include <bits/stdc++.h>
using namespace std;
int n, a=0, f=0, i=0;
string s;

int main()
{
	cin>>n; 
	cin>>s;
	for(int j=0; j<n; j++)
	{
		if(s[j]=='A') a++;
		else if (s[j]=='F') f++;
		else i++;
	}
	if(i==0) cout<<a<<endl;
	else if(i==1) cout<<1<<endl;
	else cout <<0<<endl;
	return 0;
}


