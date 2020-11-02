int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
#include<stdio.h>
int main()
{
    char s1[]="stone",s2[]="longest";
    int m=strlen(s1)+1,n=strlen(s2)+1;
    printf("%d\t%d\n",m,n);
    int dp[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           dp[i][j]=0;
        }
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
           if(s1[i-1] == s2[j-1])
           {
               dp[i][j] = 1+dp[i-1][j-1];
           }
           else
           {
               dp[i][j] = max(dp[i-1][j],dp[i][j-1]); 
           }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",dp[i][j]);
        }
        printf("\n");
    }
    printf("Length is : %d\n",dp[m-1][n-1]);
    int i=m,j=n,index=dp[m-1][n-1];
    char ans[dp[m-1][n-1]+1];
    while(i > 0 && j > 0)
    {
        if(s1[i-1] == s2[j-1])
        {
            ans[index--] = s1[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    printf("String is : %s",ans);
    return 0;
}
