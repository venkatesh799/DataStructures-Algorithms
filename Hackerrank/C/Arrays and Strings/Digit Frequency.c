/*

https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    char s[1000000];
    int temp[1000000],i=0,j=0,k=0,ans=0;
    scanf("%s",s);
    while(s[i] != NULL)
    {   if(isdigit(s[i]))
        {
            temp[j]=s[i]-'0';
            j++;
        }
        i++;
    }
    for(i=0;i<10;i++)
    {
        for(k=0;k<j;k++)
        {
            if(temp[k] == i)
            {
                ans=ans+1;
            }
        }
        printf("%d ",ans);
        ans=0;
    }  
    return 0;
}
