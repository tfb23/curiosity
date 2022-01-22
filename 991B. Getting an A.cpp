//    https://codeforces.com/contest/991/problem/b


#include <bits/stdc++.h>
using namespace std;

bool check(int sum, int n) {
	return sum * 10 >= n * 45;
}

int main() {
	int n; cin >> n;
	vector<int> v(n);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	sort(v.begin(), v.end());
	int ans = 0;
	while(!check(sum, n)) {
		sum += 5 - v[ans];
		ans++;
	}
	cout << ans << endl;
}
