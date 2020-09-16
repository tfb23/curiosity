//    https://codeforces.com/problemset/problem/550/A


#include <iostream>
#include <cstring>
 
char s[100001];
int main()
{
	char *c;
    scanf("%s",s);
    if((c=strstr(s,"AB"))!=NULL && strstr(c+2,"BA")!=NULL)
    {
         printf("YES\n");
         return 0;
    }
    if((c=strstr(s,"BA"))!=NULL && strstr(c+2,"AB")!=NULL)
    {
         printf("YES\n");
         return 0;
    }
    printf("NO\n");
    return 0;
}
