#include <stdio.h>

int main()
{
    char s[100];
    int i=0,sign=1,result=0;
    scanf("%s",s);
    if(s[i] == '-')
    {
        sign=-1;
        i++;
    }
    while(s[i])
    {
        if(!(s[i]-'0' >= 0 && s[i]-'0' <= 9))
        {
            printf("WRONG:");
            break;
        }
        else
        {
            result=result*10+s[i]-'0';
        }
        i++;
    }
    result=result*sign;
    printf("%d",result);
}

/* 
INPUT : "123"
OUTPUT : 123

INPUT : "-123"
OUTPUT : -123    */
