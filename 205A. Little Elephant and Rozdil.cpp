//    https://codeforces.com/contest/205/problem/A


#include <bits/stdc++.h>
using namespace std;


int main() {
long long n,min,t=0,c=1;
cin>>n;
int a[n];
cin>>a[0];
min=a[0];
for(int i=1;i<n;i++)
{
	cin>>a[i];
	if(a[i]<min)
	{
		min=a[i];
		t=i;
		c=1;
	}
	else if(a[i]==min)
	c++;
}
if(c==1)
cout<<t+1;
else
cout<<"Still Rozdil";

	return 0;
}
