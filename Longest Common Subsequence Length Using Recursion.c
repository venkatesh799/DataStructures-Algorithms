int max(int a,int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int lcs(char *s1,char *s2,int i,int j)
{

        if(s1[i] == '\0' || s2[j] == '\0')
        {
            return 0;
        }
        if(s1[i] == s2[j])
        {
            return 1+lcs(s1,s2,i+1,j+1);
        }
        if(s1[i] != s2[j])
        {
            return max(lcs(s1,s2,i+1,j),lcs(s1,s2,i,j+1));
        }
    
}
#include <stdio.h>
#include<math.h>
int main()
{
   char s1[]="stone",s2[]="longest";
   int ans;
   ans=lcs(s1,s2,0,0);
   printf("%d\n",ans);
   return 0;
}
