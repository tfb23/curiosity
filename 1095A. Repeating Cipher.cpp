//    https://codeforces.com/problemset/problem/1095/A


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#include <regex>
#define   pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;
const int N=1e5;

int main()
{
	SIS;
	
	int i, n, k=0;
	char s[123];
	
	cin>>n;
	cin>>s;
	
	for(i=1; i<s[k]!='\0'; i++)
	{
		cout<<s[k];
		k+=i;
	}
	cout<<endl;
}
