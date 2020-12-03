//    https://codeforces.com/problemset/problem/208/A


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
#include <regex>
#define pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;

int main()
{
	SIS;
	
	string s1, s2;
    while(cin>>s1)
    {
        s2 = regex_replace(s1,regex("(WUB)+")," ");
        string s3;
        s3=regex_replace(s2,regex("^\\s"),"");
        cout<<s3<<endl;
    }
}


/*


 while(~scanf("%s",s))
    {
        int n=strlen(s);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            while(i+2<n&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')i+=3;
            if(flag)printf(" ");
            while(i<n&&!(i+2<n&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'))printf("%c",s[i]),i++;
            i--;
            flag=1;
        }
        printf("\n"); 
	
	
*/
