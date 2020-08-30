//    https://codeforces.com/problemset/problem/112/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[105],str2[105];
    cin>>str1>>str2;
    printf("%d\n",strcasecmp(str1,str2));  
}


    /*
    for (int i = 0; i < strlen(s1); i++) {
			s1[i] = toupper(s1[i]);
		}

		for (int i = 0; i < strlen(s2); i++) {
			s2[i] = toupper(s2[i]);
		}
		printf("%d\n", strcmp(s1, s2));
    */
    

    /*
    for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<='Z'&&a[i]>='A') a[i]+=32;
		if(b[i]<='Z'&&b[i]>='A') b[i]+=32;
		if(a[i]>b[i])
		{
			printf("1\n");
			break;
		}
		else if(a[i]<b[i])
		{
			printf("-1\n");
			break;
		}
    */
