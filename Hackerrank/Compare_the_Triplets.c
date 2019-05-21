#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,a[3],b[3],ap=0,bp=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 3; i++)
    {
      scanf("%d", &b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            ap+=1;
        else if(a[i]<b[i])
            bp+=1;
    }
    printf("%d ",ap);
    printf("%d",bp);
}
