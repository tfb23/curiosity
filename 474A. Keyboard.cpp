//    https://codeforces.com/problemset/problem/474/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    char u;
    char s[123];

    char k[34]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};

    int i, j, flag=0;
    cin>>u;

    if(u=='R') flag=1;

    cin>>s;

    if(flag==1)
    {
        for(i=0; i<strlen(s); i++)
        {
            for(j=0; j<30; j++)
            {
                if(s[i]==k[j])
                {
                    cout<<k[j-1];
                    break;
                }
            }
        }
    }
    else
    {
        for(i=0; i<strlen(s); i++)
        {
            for(j=0; j<30; j++)
            {
                if(s[i]==k[j])
                {
                    cout<<k[j+1];
                    break;
                }
            }
        }
    }
}
