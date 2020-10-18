#include<stdio.h>
int main()
{
    /*
     Inverted Half pyramid

        * * * * * *
        *       *
        *     *
        *   *
        * *
        *
    */
    int row,col;
    printf("Enter No.of Rows and Columns\n");
    scanf("%d%d",&row,&col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i == 0)
            {
                printf(" * ");
            }
            else if(j == 0 || j == col-i-1)
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

