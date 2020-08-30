//    https://codeforces.com/problemset/problem/681/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string name;
	int pre, aft;
	int flag=0; 
	for (int i=0; i<n; i++)
	{
		cin>>name>>pre>>aft;
		if(pre>=2400 && aft>pre)
		flag=1; 
	}
	if(flag==1)
	{
		cout<<"Yes"<<endl;
	}
	else 
	{
		cout<<"No"<<endl;
	}
	return 0;
}
