#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    long long int num, count, i;
    
    while(t--)
    {
        count = 0;
        scanf("%lld",&num);
        for( i = 2; i <= num; i += 2 )
        {
            if(i % 4 != 0)
                count++;
        }
        
        printf("%lld\n", count);
    }
}
