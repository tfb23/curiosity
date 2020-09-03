//    https://codeforces.com/problemset/problem/501/B


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int q; 
	string oldName, newName;
	map<string, string>mp;
	cin>>q;
	while (q--)
	{
		cin>>oldName>>newName;
		if (!mp.count(oldName))
		{
			mp[newName]=oldName;
		}
		else 
		{
			mp[newName]=mp[oldName];
			mp.erase(oldName);
		}
	}
	cout<<mp.size()<<endl;
	for(map<string, string>::iterator it=mp.begin(); it!=mp.end(); it++)
	{
		cout<< it->second <<" "<< it->first<<endl;
	}
}
