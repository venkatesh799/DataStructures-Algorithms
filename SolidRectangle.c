#include<stdio.h>
int main()
{
     // Solid Rectangle
     /*

     * * * *
     * * * *
     * * * *

    */
    int row,col;
    printf("Enter No.of Rows and Columns\n");
    scanf("%d%d",&row,&col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
