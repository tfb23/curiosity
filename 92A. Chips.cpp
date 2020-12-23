//    https://codeforces.com/problemset/problem/92/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, m;
	
	cin>>n>>m;
	
	i=1; 
	
	while(1)
	{
		if(m-i>=0)	m=m-i;
		
		else 
		{
			cout<<m<<endl;
			break;
		}
		
		i++;
		
		if(i==n+1) i=1;
	}
}

/*

 for(int i=1;;i++)
        {
            if(i%n!=0) i%=n;
            else i=n;
            if(m<i)
            {
                printf("%d\n",m);
                break;
            }
            m-=i;


*/
