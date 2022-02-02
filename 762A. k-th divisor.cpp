//    https://codeforces.com/problemset/problem/762/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> divs;
    for(int i = 1;  i <= sqrt(n); i++) {
        if(n % i == 0) {
            divs.push_back(i);
        if(i != n / i) divs.push_back(n / i);
        }
    }
    sort(divs.begin(), divs.end());
    if(divs.size() < k) cout << "-1\n";
    else cout << divs[k - 1] << "\n";
}
