/*
https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3291/
*/

#define CAPACITY 100
char stack1[CAPACITY],stack2[CAPACITY],ans1[CAPACITY],ans2[CAPACITY];

bool backspaceCompare(char * S, char * T){
    int i=0,top1=-1,top2=-1;
    char stack1[CAPACITY]="",stack2[CAPACITY]="",ans1[CAPACITY]="",ans2[CAPACITY]="";
    
    while(S[i] != '\0')
    {
        if(S[i] != '#')
        {
            top1++;
            stack1[top1]=S[i];
        }
        else if(top1 != -1)
        {
            top1--;
        }
        i++;
    }
    i=0;
    while(T[i] != '\0')
    {
        if(T[i] != '#')
        {
            top2++;
            stack2[top2]=T[i];
        }
        else if(top2 != -1)
        {
            top2--;
        }
        i++;
    }
   
    for(int i=0;i<=top1;i++)
        {
            ans1[i]=stack1[i];
        }
    for(int i=0;i<=top2;i++)
        {
            ans2[i]=stack2[i];
        }
   
    if(strcmp(ans1,ans2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

