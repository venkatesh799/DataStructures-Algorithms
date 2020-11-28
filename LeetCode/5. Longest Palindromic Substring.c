

char * longestPalindrome(char * s)
{
    int n=strlen(s),maxlength=0;
       
        // Creating a table of n*n
        int dp[n][n];
        // Initially filling it with zero's
        memset(dp,0,sizeof(dp));
        
        // Length 1
        //filling Diagonal elements as True.
        // Every element itself is a Pallindrome
        for(int i=0;i<n;i++)
        {
            dp[i][i] = 1;
            maxlength=1;
        }
        
        // Length 2
        int start=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == s[i+1])
            {
                dp[i][i+1]=1;
                start=i;
                maxlength=2;
            }
        }
        
        // Length 3
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                if(s[i] == s[j] && dp[i+1][j-1] == 1)
                {
                    dp[i][j]=1;
                    if(k > maxlength)
                    {
                        maxlength=k;
                        start=i;
                    }
                }
            }
        }
    
        // Memory Alloocation for final substring
        char *ans = (char *) calloc(maxlength + 1, sizeof(char));
        int j=0;
        for(int i=start;i<=start+maxlength-1;i++)
        {
            ans[j++]=s[i];
        }
    return ans;
}
