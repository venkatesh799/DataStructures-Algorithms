
#include<stdio.h>
int main()
{
    /*
     Hollow Full pyramid

             *
           *   *
         *       *
       * * * * * * *

    */
    int N;
    printf("Enter Size of pyramid\n");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=2*N-1;j++)
        {
            if(i ==  N || i+j == N+1 || j-i == N-1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}

