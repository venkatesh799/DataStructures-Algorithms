#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
void pop();
void display();
void length();
void peek();
int isfull();
int isempty();
void main()
{
    int  a=1,choice,ele;
    while(a)
    {
        
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.LENGTH\n5.PEEK\n6.STOP\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);
      switch(choice)  
      {
          case 1:printf("Enter Element to Insert");
                 scanf("%d",&ele);
                 push(ele);
                 break;
          case 2:pop();
                 break;
          case 3:display();
                 break;
          case 4:length();
                 break;
          case 5:peek();
                 break;
          case 6:a=0;
                 break;
                 
      }
    }
}
void push(int ele)
{
    if(isfull())
    {
        printf("Stack is full");
    }
    else
    {   
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    if(isempty())
    {
        printf("Stack is empty");
    }
    else
    {
        top--;
    }
}
void display()
{
    int i=0;
    if(isempty())
    {
        printf("Stack is empty");
    }
    else
    {
        for(i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void length()
{
    printf("Stack length is : %d",top+1);
}
void peek()
{   
    if(isempty())
    {
        printf("Stack is empty");
    }
    else
    {
    printf("Stack top element is : %d",stack[top]);
    }
}
int isfull()
{
    if(top == CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
