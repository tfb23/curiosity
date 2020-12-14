//    https://codeforces.com/problemset/problem/255/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, a[50], chest=0, back=0, biceps=0;
	
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<n; i+=3)
	{
		chest+=a[i];
	}
	
	for(i=1; i<n; i+=3)
	{
		biceps+=a[i];
	}
	
	for(i=2; i<n; i+=3)
	{
		back+=a[i];
	}
	
	if(chest>biceps && chest>back)
	{
		cout<<"chest"<<endl;
	}
	
	else if(biceps>chest && biceps>back)
	{
		cout<<"biceps"<<endl;
	}
	
	else 
	{
		cout<<"back"<<endl;
	}
	
}
