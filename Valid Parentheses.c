#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 10000
void push(char);
int isempty();
int check(char,char);
int top=-1,STACK[MAX];
void main()
{
    int len;
    char s[10000],i=0;
    printf("Enter Text\n");
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
            push(s[i]);
        }
        else if( s[i] == ']' || s[i] == ')' || s[i] == '}')
        {
            if(isempty() || !check(s[top],s[i]))
            {
                top=10;
                break;
            }
            else
            {
                top--;
            }
        }
    }
    if(top == -1)
    {
        printf("T R U E\n");
    }
    else
    {
        printf("F A L S E\n");
    }
}
void push(char a)
{
        top+=1;
        STACK[top]=a;
    
}
int isempty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int check(char open,char close)
{

    if(open == '{' && close == '}')
    {
    return 1;
    }
    else if(open == '[' && close == ']')
    {
    return 1;
    }
    else if(open == '(' && close == ')')
    {
    return 1;
    }
    return 0;
}
