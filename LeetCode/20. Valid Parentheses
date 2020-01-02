
#define MAX 1000
int stack[MAX],top=-1;
void push(char a)
{
    top+=1;
    stack[top]=a;
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

bool isValid(char * s)
{   
    if(s == "\o")
    {
        return 1;
    }
    int len,i=0;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
            push(s[i]);
        }
        else if(s[i] == ']' || s[i] == ')' || s[i] == '}')
        {
           if(isempty() || !check(stack[top],s[i]))
           {
               top = 10;
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
        return 1;
    }
    else
    {
        return 0;
    }
}

