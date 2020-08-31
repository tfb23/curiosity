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


#include <bits/stdc++.h>
using namespace std;
 
string s[10];
map<char,int> dic;
int inc[300];
 
int main()
{
    for (int i = 0;i < 8;i++)
        cin >> s[i];
    for (int i = 0;i < 8;i++)
        for (int j= 0;j < 8;j++)
            if (s[i][j]!='.'){
                dic[s[i][j]]++;
            }
    inc['q']=9;inc['r']=5;inc['b']=3;inc['n']=3;inc['p']=1;
 
    int a1 = 0;
    for (char i='A';i<='Z';i++){
        a1+=inc[tolower(i)]*dic[i];
    }
    int a2 = 0;
    for (char i='a';i<='z';i++){
        a2+=inc[i]*dic[i];
    }
    if (a1>a2){
        cout<<"White"<<endl;
    }else{
        if (a1==a2){
            cout<<"Draw"<<endl;
        }else{
            cout<<"Black"<<endl;
        }
    }
    return 0;
}


*/
