#include<stdio.h>
int main()
{
    /*

     Inverted Full Pyramid

          * * * * * * *
            * * * * *
              * * *
                *
     */s
    int N;
    printf("Enter Height of Pyramid\n");
    scanf("%d",&N);
    for(int i=N;i>0;i--)
    {
        for(int j=0;j<=2*N-1;j++)
        {
            if(j >= N-(i-1) && j <= N+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
