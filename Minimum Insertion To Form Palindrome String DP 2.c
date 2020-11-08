// Minimum insertions to form a palindrome
#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int findlcs(char s1[],int n)
{
    char s2[]="edcba"; // Reverse the String Here i.e strrev(s1)
    int table[n+1][n+1];
    memset(table,0,sizeof(table));
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(s1[i] == s2[j])
            {
                table[i][j] = 1 + table[i-1][j-1];
            }
            else
            {
                table[i][j] = max(table[i-1][j],table[i][j-1]);
            }
        }
    }
    return table[n-1][n-1];
}
int main()
{
    // Minimum Insertions Requird to form String Palindrome
    // Reverse Given String 
    // Then Find LCS(String,Reversed String)
    // Final_Answer = length(String) - LCS Length  that's it  
    
    char s[]="abcde";
    int n=strlen(s),LCS,min_insertions;
    LCS = findlcs(s,n);
    printf("LCS is : %d\n",LCS);
    min_insertions = n - LCS;
    printf("Minimum Insertions Required to Form Palindrome is : %d", min_insertions);
    return 0;
    
}
