/*  Problem Statement  :  https://codeforces.com/problemset/problem/71/A

*/

#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test)
	{
		char s[100];
		scanf("%s",&s);
		int n=strlen(s);
		if(n > 10)
		{
			printf("%c%d%c\n",s[0],n-2,s[n-1]);
		}
		else
		{
			printf("%s\n",s);
		}
		test--;
	}
	return 0;
}
