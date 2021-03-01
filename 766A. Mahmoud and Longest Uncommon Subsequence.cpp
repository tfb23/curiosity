//    https://codeforces.com/problemset/problem/766/A


#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	
	if(a==b) cout<<-1<<endl;
	else cout<<max(a.size(), b.size());
}
