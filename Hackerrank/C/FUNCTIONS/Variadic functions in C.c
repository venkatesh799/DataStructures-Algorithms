/*

https://www.hackerrank.com/challenges/variadic-functions-in-c/problem

*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...)
    {
    va_list ptr;
    va_start(ptr,count);
    int i=0,sum=0;
    for(i=0;i<count;i++)
    {
        sum=sum+va_arg(ptr,int);
    }
    va_end(ptr);
    return sum;
}

int min(int count,...) {
    int min=1,i=0,temp;
    va_list ptr;
    va_start(ptr,count);
    min=va_arg(ptr,int);
    for(i=1;i<count;i++)
    {
        temp=va_arg(ptr,int);
        if(temp < min)
            min=temp;
    }
    va_end(ptr);
    return min;


}

int max(int count,...)
{
    int i=0,max=100000,temp;
    va_list ptr;
    va_start(ptr,count);
    max=va_arg(ptr,int);
    for(i=1;i<count;i++)
    {   
        temp=va_arg(ptr,int);
        if(temp > max)
            max=temp;
    }
    va_end(ptr);
    return max;

}

int test_implementations_by_sending_three_elements() {
