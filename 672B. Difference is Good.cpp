#include <iostream>
#include <set>
#include <cstring>
#include <cstdio>
using namespace std;
 
set<char> dif;
 
int main()
{
	int n; 
	string str; 
	cin>>n; 
	cin>>str; 
	int sz = str.size();
	if (sz>26)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for (int i=0; i<sz; i++)
		dif.insert(str[i]);
		cout<<sz - dif.size()<<endl;
	}
	return 0;
}
