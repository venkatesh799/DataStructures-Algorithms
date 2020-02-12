/*
https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,temp;
    scanf("%d", &n);
    
    while(n != 0)
    {
        temp=n%10;
        n=n/10;
        sum=sum+temp;
    }
    printf("%d",sum);
    return 0;
}

