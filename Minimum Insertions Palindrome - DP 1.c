#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    return a > b ? a : b;
}
int findmin(char s[],int n)
{
    int table[n][n],l,h; 
    memset(table,0,sizeof(table));
    for(int len=1;len<n;len++)
    {
        for(l=0,h=len; h < n ; h++,l++)
        {
            // By using this we can Fill the table
            // we can stop overlapping problem
            if(s[l] == s[h])
            {
                table[l][h] = table[l+1][h-1];
            }
            else
            {
                table[l][h] = min(table[l+1][h],table[l][h-1])+1;
            }
        }
    }
    return table[0][n-1];
}
int main()
{
    char s[] = "abcde";
    int len=strlen(s),ans;
    ans = findmin(s,len);
    printf("%d",ans);
    return 0;
}