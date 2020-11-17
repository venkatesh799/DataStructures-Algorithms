/*
      Problem Statement  :   https://codeforces.com/problemset/problem/282/A
      
*/


#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,n;
    scanf("%d",&n);
    while(n)
    {
        char s[100];
        scanf("%s",&s);
       if(s[1] == '+')
       {
           x++;
       }
       else
       {
           x--;
       }
        s[0]='\0';
        n--;
    }
    printf("%d",x);
}
