//Problem link: https://codeforces.com/problemset/problem/688/B


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s;
	reverse(s.begin(), s.end());
	cout<<s<<endl;
}

/*

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s;
	for (int i=s.size()-1; i>=0; i--) 
	cout<<s[i];
	puts("");
}

*/
