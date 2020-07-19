#include <bits/stdc++.h>
using namespace std;

string ans[10]={"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
string s1, s2;

int main()
{
	int n;
	cin>>n;
	string s1, s2;
	cin>>s1;
	for (int i=0; i<s1.size(); i++)
	{
		s2+=ans[s1[i]-'0'];
	}
	sort(s2.begin(), s2.end());
	reverse(s2.begin(), s2.end());
	cout<<s2;
}
