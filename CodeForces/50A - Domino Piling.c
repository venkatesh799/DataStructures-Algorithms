/* 

    Problem Statement  :  https://codeforces.com/problemset/problem/50/A
  
*/


#include<stdio.h>
int main()
{
    int m,n,ans=0,area;
    scanf("%d%d",&m,&n);
    area=m*n;
    if(area % 2 == 0)
    {
        printf("%d",(area)/2);
    }
    else if(area != 0)
    {
        printf("%d",(area-1)/2);
    }
    else
    {
        printf("%d",ans);
    }
    return 0;
}
