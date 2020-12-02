//    https://codeforces.com/problemset/problem/96/A


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
#define pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;

int main()
{
	SIS;
	
	char s[123];
	scanf("%s", s);
	if(strstr(s, "1111111") || strstr(s, "0000000")) printf("YES");
	else printf("NO");
}


/*


int main()
{
	string s;	cin>>s;
	int cnt=1;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1]) cnt++;
		else cnt=1;
		if(cnt==7) 
    {
      cout<<"YES"<<endl;
      return 0;
    }
	} 
	cout<<"NO";
	return 0;
} 


*/
