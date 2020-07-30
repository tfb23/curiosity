//   https://codeforces.com/problemset/problem/281/A


#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int main ()
{
	char n[1001];
	cin >> n;
	if (n[0] >= 'a'&&n[0] <= 'z')
		n[0] -= 32;
 
	cout << n << endl;
	
	return 0;
}
