/*  

Author    mahak_bagha1

link      https://www.hackerrank.com/challenges/playing-with-characters/problem

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c1,c2[1000],c3[10000];
    scanf("%c",&c1);
    scanf("%s",c2);
    scanf("\n");
    scanf("%[^\n]%*c",c3);
    printf("%c\n",c1);    
    printf("%s\n",c2);
    printf("%s\n",c3);
    return 0;
}

