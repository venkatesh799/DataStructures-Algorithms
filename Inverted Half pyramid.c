

#include<stdio.h>
int main()
{
    /*
     Inverted Half pyramid

        * * * * * *
        * * * * *
        * * * *
        * * *
        * *
        *
    */
    int row,col;
    printf("Enter No.of Rows and Columns\n");
    scanf("%d%d",&row,&col);
    for(int i=row;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
           printf(" * ");
        }
        printf("\n");
    }
    return 0;
}

