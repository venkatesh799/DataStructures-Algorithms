/*  Spiral Matrix 
    input : { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }
                    
      output :1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11   */
#include<stdio.h>
void ans(a,m,n);
void main()
{
    int n,m,a[100][100],i=0,j=0;
    printf("Enter Row Size and Column Size\n");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    ans(a,m,n);
}
void ans(int a[100][100],int m,int n)
{
    int t=0,b=m-1,l=0,r=n-1,dir=0,i,j;
    while(t <= b && l <= r)
    {
        if(dir==0)
        {
            for(i=l;i<=r;i++)
            {
                printf("%d ",a[t][i]);
            }
            t++;
           
        }
        else if(dir==1)
        {
            for(i=t;i<=b;i++)
            {
                printf("%d ",a[i][r]);
            }+
            r--;
           
        }
        else if(dir==2)
        {
            for(i=r;i>=l;i--)
            {
                printf("%d ",a[b][i]);
            }
            b--;
            
        }
        else if(dir==3)
        {
            for(i=b;i>=t;i--)
            {
                printf("%d ",a[i][l]);
            }
            l++;
            
        }
        dir=(dir+1)%4;
    }
    
    
}
