/*
      Problem Statement  :   https://codeforces.com/contest/158/problem/A
  
*/
      
#include<stdio.h>
int main()
{
    int n,k,Contestants[100],ans=0,temp;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&Contestants[i]);
    }
    temp=Contestants[k-1];
    for(int i=0;i<n;i++)
    {
        if(Contestants[i] >= temp && Contestants[i] > 0)
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;

}
