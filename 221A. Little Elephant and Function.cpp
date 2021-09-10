//    https://codeforces.com/problemset/problem/221/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i, n;
    cin >> n;
    if(n == 1) cout << 1 << endl;
    if(n == 2) cout << "2 1"<< endl;
    if( n >=3) {
	    cout << n << " ";
	    for(int i = 1; i <= n - 2; i++) cout << i << " ";
	    cout << n - 1;
    }
    return 0;
}
