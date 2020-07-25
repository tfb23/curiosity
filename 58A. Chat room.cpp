//https://codeforces.com/problemset/problem/58/A


/* 
If there is an ordered "hello" in the input string.
then it will output YES, otherwise NO. The "hello" does not need to be continuous.
Using char array {'h','e','l','l','o'}scan & mathch for the string.
the corresponding flag[i]=true, next time Loop head=++j, and jump out of the inner loop.
YES flag[i] are all true, otherwise NO.
*/


#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	int flag=0; 
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++)
	{
		if (flag==0 && s[i]=='h') 
		{
			flag=1;
		}
		else if (flag==1 && s[i]=='e')
		{
			flag=2;
		}
		else if (flag==2 && s[i]=='l')
		{
			flag=3;
		}
		else if (flag==3 && s[i]=='l')
		{
			flag=4;
		}
		else if (flag==4 && s[i]=='o')
		{
			flag=5;
		}
	}
	if(flag==5)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
