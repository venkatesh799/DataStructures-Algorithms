#include<stdio.h>
#include<conio.h>
void bubble(int a[],int n);
void main()
{
    int a[10],n,i;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter arry values\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    printf("After sorting array values are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void bubble(int a[],int n)
{
    int i,j,temp,flag;
    for(i=1;i<n-1;i++)
    {
        flag=1;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
            if(flag==0)
            break;
        }
    }
}









