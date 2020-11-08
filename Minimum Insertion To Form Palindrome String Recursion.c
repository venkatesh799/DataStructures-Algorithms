#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    return a > b ? a : b;
}
int findmin(char s[],int l,int h)
{
    if(l>h)
    {
        return INT_MAX;
    }
    if(l == h)   // String has only One Character
    {
        return 0;
    }
    if(l == h-1)     // String has Two Characters Only
    {
        return s[l] == s[h] ? 0 : 1; // If they match return 0 else 1
    }
    if(s[l] == s[h])     // first & last characters are matched.so we move to next characters
    {
        return findmin(s,l+1,h-1);
    }
    else
    {
        // two conditions 
        // 1) move L one Forward position with same Right
        // 2) move R one Forward position with same Left
        return min(findmin(s,l+1,h),findmin(s,l,h-1))+1;
    }
}
int main()
{
    // it is a Recursive Solution Which Will Caues Overlapping Problem
    char s[] = "abcd";
    int ans=findmin(s,0,strlen(s)-1);
    printf("%d",ans);
    return 0;
}
