
#include<stdio.h>
int main()
{
     // Half Pyramid
     /*

    *
    * *
    * * *
    * * * *
    * * * * *
    * * * * * *

    */
    int row,col;
    printf("Enter No.of Rows and Columns\n");
    scanf("%d%d",&row,&col);
    for(int i=0;i<row;i++)
    {
        for(int j=i;j>=0;j--)
        {
           printf(" * ");
        }
        printf("\n");
    }
    return 0;
}

