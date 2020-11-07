// https://www.geeksforgeeks.org/longest-repeated-subsequence/

#include <stdio.h>
int max(int a,int b)
{
    return a > b ? a : b;
}
int main() 
{
    int test;  
    scanf("%d",&test);   // Test Cases
    while(test--)
    { 
    	int m;               
    	scanf("%d",&m);      // Length of String
    	m+=1;
    	char s[m+1];      
    	scanf("%s",s);            // Input string 
    	int dp[m][m];           // 2D array 
    	for(int i=0;i<m;i++)
    	{
    	    for(int j=0;j<m;j++)
    	    {
    	        dp[i][j] = 0;
    	    }
    	}
    	for(int i=1;i<m;i++)
    	{
    	    for(int j=1;j<m;j++)
    	    {
    	        if(s[i-1] == s[j-1] && i != j)
    	        {
    	            dp[i][j] = 1+dp[i-1][j-1];
    	        }
    	        else
    	        {
    	            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    	        }
    	    }
    	}
    	printf("%d\n",dp[m-1][m-1]);
    }
	return 0;
}
