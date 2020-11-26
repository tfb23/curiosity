//    https://codeforces.com/problemset/problem/938/A


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
#define pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;


	
const string V="aeiouy";
	
bool vowel(char c)
	{
		return V.find(c)!=-1;
	}
	
int main()
{
	SIS;
	
	int n;
	string s;
	cin>>n>>s;
	
	cout<<s[0];
	for(int i=1; i<n; i++)
	{
		if(!vowel(s[i-1]) || !vowel(s[i]))
		cout<<s[i];
	}
}

