#include<stdio.h>
void diamond(int Rows)
{
    for(int i=0;i<Rows;i++)
    {
        for(int j=0;j<2*Rows-1;j++)
        {
            if(j >= Rows-(i-1) && j <= Rows+(i-1))
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
    for(int i=Rows;i>0;i--)
    {
        for(int j=0;j<=2*Rows-1;j++)
        {
            if(j >= Rows-(i-1) && j <= Rows+(i-1))
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
}
int main()
{
    int N;
    printf("Enter Height of Diamond\n");
    scanf("%d",&N);
    diamond(N);
    return 0;
}
