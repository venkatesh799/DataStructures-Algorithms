//Google Kick Start Round C 2019
//@Author : Venkatesh thirunagiri
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,sl,row,col,m,n,a[1000][1000],j;
    char c[1000];
    //printf("enter string length\n");
    scanf("%d",&sl);
    //printf("size of matrix\n");
    scanf("%d%d",&m,&n);
    //printf("row and col");
    scanf("%d%d",&row,&col);
    //printf("string\n");
    for(i=0;i<=sl;i++)
    {
        scanf("%c",&c[i]);
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
    row=row-1;
    col=col-1;
    for(i=0;i<=sl;i++)
    {
        if(c[i]=='E')
         
        {
            a[row][col]=1;
           if(a[row][col+1] != 1)
            {
                a[row][col+1]=1;
               col=col+1;
            }
            else
            {
              while(a[row][col+1] != 0)
              {
                  col++;
              }
              col++;
            }
        }
        else if(c[i]=='W')
        {
            a[row][col]=1;
            
             if(a[row][col-1] != 1)
            {
                a[row][col-1]=1;
                col++;
            }
            else
            {
              while(a[row][col-1] != 0)
              {
                  col--;
                 
              }
               a[row][col-1]=1;
              col--;
            }
        }
        else if(c[i]=='S')
        {
            a[row][col]=1;
             if(a[row+1][col] != 1)
            {
                a[row+1][col]=1;
                row++;
            }
            else
            {
              while(a[row+1][col] != 0)
              {
                  row++;
              }
              row++;
            }
        }
        else if(c[i]=='N')
        {
            a[row][col]=1;
            if(a[row-1][col] != 1)
            {
                a[row-1][col]=1;
                row--;
            }
            else
            {
              while(a[row-1][col] != 0)
              {
                  row--;
              }
              row--;
            }
        }

    }    
    printf("%d %d\n",row+1,col+1);
}
