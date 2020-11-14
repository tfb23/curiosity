//    http://codeforces.com/problemset/problem/714/B


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

using namespace std;
int a[100100];

int main()
{
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++) 
	{
		scanf("%d", a + i);
	}
	sort(a, a + n);
	int type = unique(a, a + n) - a;
	if(type < 3 || type == 3 && a[1] - a[0] == a[2] - a[1]) puts("YES");
	else puts("NO");
	
}
