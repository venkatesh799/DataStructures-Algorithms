/*

AUTHOR   :  Aditi Tayal
https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int i=0,j=0,AND=0,OR=0,XOR=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if((i&j )> AND && (i&j) < k)
                AND=i&j;
            if((i|j) > OR  &&  (i|j) < k)
                OR=i|j;
            if((i^j) > XOR && (i^j) < k)
                XOR=i^j;
        }
    }
    printf("%d\n%d\n%d\n",AND,OR,XOR);
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
