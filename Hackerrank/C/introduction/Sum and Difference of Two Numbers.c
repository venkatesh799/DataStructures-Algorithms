/*

https://www.hackerrank.com/challenges/sum-numbers-c/problem

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a,b,a1,b1;
    float c,d,c1,d1;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    a1=a+b;
    b1=a-b;
    c1=c+d;
    d1=c-d;
    printf("%d %d\n",a1,b1);
    printf("%.1f %.1f\n",c1,d1);
    return 0;
}

