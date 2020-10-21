/*

            **Problem Solution**

Perfect number is a number which is equal to sum of its divisor.
For Example divisors of 6 are 1,2 and 3. The sum of these divisors is 6.
So 6 is called as a perfect number.

*/

#include<stdio.h>
int main()
{
    int n,i,sum=0,rem;
    printf("Enter a Number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        rem = n%i;
        if(rem == 0)
        {
            sum+=i;
        }
    }
    if(sum == n)
    {
        printf("%d is Perfect Number\n",n);
    }
    else
    {
        printf("%d is Not a Perfect Number\n",n);
    }
    return 0;
}
