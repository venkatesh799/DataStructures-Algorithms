/*

  Problem Statement : https://codeforces.com/problemset/problem/4/A
  
*/

#include<stdio.h>
int main()
{
    long int weight;
    scanf("%ld",&weight);
    if(weight > 2)
    {
        if(weight%2 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
