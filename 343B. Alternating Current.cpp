//    http://codeforces.com/problemset/problem/343/B


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;
stack<char>line;

int main()
{
	SIS;
	
	string s;
	cin>>s;
	
	for(int i=0; i<s.length(); i++)
	{
		if(line.empty() || line.top() !=s[i]) 
		{
			line.push(s[i]);
		}
		else if(line.top()==s[i])
		{
			line.pop();
		}
	}
	if(line.empty()) cout<<"YES";
	else cout<<"NO";
}
