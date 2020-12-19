//    https://codeforces.com/problemset/problem/378/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, a, b, acnt=0, bcnt=0;
	
	cin>>a>>b;
	
	for(i=1; i<7; i++)
	{
		if(abs(a-i)<abs(b-i))
		{
			acnt++;
		}
		else if(abs(a-i)==abs(b-i))
		{
			bcnt++;
		}
	}
	int  d;
	d=6-(acnt+bcnt);
	cout<<acnt<<" "<<bcnt<<" "<<d<<endl;
}
