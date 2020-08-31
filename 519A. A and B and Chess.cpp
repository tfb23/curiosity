//    https://codeforces.com/problemset/problem/519/A


#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	char c;
	int i,j,a=0,b=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			scanf("%c",&c);
			if(c=='Q')
			{
				a+=9;
			}
			else if(c=='R')
			{
				a+=5;
			}
			else if (c=='B' || c=='N')
			{
				a+=3;
			}
			else if(c=='P')
			{
				a++;
			}
			else if(c=='q')
			{
				b+=9;
			}
			else if(c=='r')
			{
				b+=5;
			}
			else if(c=='b' || c=='n')
			{
				b+=3;
			}
			else if(c=='p')
			{
				b++;
			}
		}
		c=getchar();
	}
	if(a>b)
	{
		printf("White\n");
	}
	else if(b>a)
	{
		printf("Black\n");
	}
	else
	{
		printf("Draw\n");
	}
	return 0;
}


/*
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	char c;
	int i,j,a=0,b=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			scanf("%c",&c);
			if(c=='Q')
			{
				a+=9;
			}
			else if(c=='R')
			{
				a+=5;
			}
			else if (c=='B' || c=='N')
			{
				a+=3;
			}
			else if(c=='P')
			{
				a++;
			}
			else if(c=='q')
			{
				b+=9;
			}
			else if(c=='r')
			{
				b+=5;
			}
			else if(c=='b' || c=='n')
			{
				b+=3;
			}
			else if(c=='p')
			{
				b++;
			}
		}
		c=getchar();
	}
	if(a>b)
	{
		printf("White\n");
	}
	else if(b>a)
	{
		printf("Black\n");
	}
	else
	{
		printf("Draw\n");
	}
	return 0;
}
*/


/*
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	char c;
	int i,j,a=0,b=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			scanf("%c",&c);
			if(c=='Q')
			{
				a+=9;
			}
			else if(c=='R')
			{
				a+=5;
			}
			else if (c=='B' || c=='N')
			{
				a+=3;
			}
			else if(c=='P')
			{
				a++;
			}
			else if(c=='q')
			{
				b+=9;
			}
			else if(c=='r')
			{
				b+=5;
			}
			else if(c=='b' || c=='n')
			{
				b+=3;
			}
			else if(c=='p')
			{
				b++;
			}
		}
		c=getchar();
	}
	if(a>b)
	{
		printf("White\n");
	}
	else if(b>a)
	{
		printf("Black\n");
	}
	else
	{
		printf("Draw\n");
	}
	return 0;
}
*/
