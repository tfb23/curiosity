//    https://codeforces.com/problemset/problem/239/A


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
	int y, k, n;
	cin>>y>>k>>n;
	for (int i=(y/k+1)*k; i<=n; i+=k)
	{
		printf("%d ", i-y);
	}
	if((y/k+1)*k>n)
	{
		puts("-1");
	}

}
