#include<stdio.h>
#include<conio.h>
void insertion(int a[],int n);
void main()
{
    int a[10],n,i;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    printf("after sorting arry values are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void insertion(int a[],int n)
{
    int hole,value,i,j;
    for(i=0;i<n;i++)
    {
        hole=i;
        value=a[i];
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        a[hole]=value;
    }
}














