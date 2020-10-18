#include<stdio.h>
int main()
{
    /*
     Full pyramid

              *
            * * *
          * * * * *
        * * * * * * *
    */
    int N;
    printf("Enter Size of pyramid\n");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<2*N-1;j++)
        {
           if(j >= N-(i-1) && j <= N+(i-1))
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

