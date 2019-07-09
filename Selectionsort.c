#include<stdio.h>
#include<conio.h>
void selection(int a[],int n);
void main()
{
    int a[10],n,i;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("enter array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("array values after sorting");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void selection(int a[],int n)
{
    int temp,i,j,imin;
    for(i=0;i<n;i++)
    {
        imin=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[imin])
            {
                imin=j;
            }
        }
        temp=a[i];
        a[i]=a[imin];
        a[imin]=temp;
    }
}
















