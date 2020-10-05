//    http://codeforces.com/problemset/problem/108/A


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

int main()
{
	SIS;
	
	int h, m;
	char c;
	cin>>h>>c>>m;
	
	while(1)
	{
		m++;
		h+=(m/60);
		m%=60;
		h%=24;
		if(h/10==m%10 && h%10==m/10)  break;
	}
	cout<<h/10<<h%10<<":"<<m/10<<m%10<<endl;
}
