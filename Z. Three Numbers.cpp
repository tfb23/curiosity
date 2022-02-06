//    https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    int ans = 0;
    for(int i=0 ; i <= k ; i++){
		for(int j=0 ; j <= k ; j++){
			if(i+j <= s and (s-(i+j))<=k) ans++;
		}
	}
    cout << ans << endl;
}
