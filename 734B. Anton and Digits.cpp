//    https://codeforces.com/problemset/problem/734/B


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
	
	int k2, k3, k5, k6, n256, n32;
	cin>>k2>>k3>>k5>>k6;
	
	n256=min(k2, min(k5, k6));
	n32=min(k3, k2-n256);
	
	cout<<32*n32+256*n256<<endl;
}
