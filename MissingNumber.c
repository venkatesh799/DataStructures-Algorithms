/*
You are given a Array of n-1 integers and these integers are in the range of 1 to n
There are no duplicates in the Array. One of the integers is missing in the Array.Find the Missing element

input : A = {1,2,3,5,6}
Output : 4
*/

#include <stdio.h>

void main()
{
    int n,a[20],i,x1,x2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x1=a[0],x2=1;
    for(i=1;i<n;i++)
    {
    x1=x1^a[i];
    }
    for(i=2;i<=n+1;i++)
    {
    x2=x2^i;
    }
    printf("%d",x1^x2);
}
