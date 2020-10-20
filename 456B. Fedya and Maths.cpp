//      https://codeforces.com/contest/456/problem/B


#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;
const int maxn=1e5+5;
char s[maxn];

int main()
{
	scanf("%s", s);
	int len=strlen(s);
	
	int ans = 0;
	for(int i=0; i<len; i++)
	{
		ans=(ans*10+s[i]- '0')%4;
	}
	printf("%d\n", ans==0?4:0);
}


/* 

some funny solution that worked:

#include <stdio.h>
int x;
int main()
{
	scanf("%d",&x);
	putchar(x%4?48:52);
}

*/





/*

#include<stdio.h>
int main()
{
	int b;
    while(scanf("%d",&b)==1)
    {
        if(b%4==0)
            printf("4\n");
        else
            printf("0\n");
	}
	return 0;
}

/*



