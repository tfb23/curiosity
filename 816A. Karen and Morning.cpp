//    https://codeforces.com/problemset/problem/816/A
    
   

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, h, h1, h2, m, m1, m2;
	
	scanf("%d:%d", &h, &m);
	
	for(i=0; ;i++)
	{
		h2=h%10;
		h1=h/10;
		m2=m%10;
		m1=m/10;
		
		if(h1==m2 && h2==m1)
		{
			cout<<i<<endl;
			return 0;
		}
		
		if(h==23 && m==59) 
		{
			cout<<i+1<<endl;
			return 0;
		}
		m++;
		
		if(m>59)
		{
			m=0; 
			h++;
		}
	}
}
