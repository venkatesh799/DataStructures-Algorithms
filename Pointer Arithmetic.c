#include <stdio.h>

int main()
{
   int a[5] = {10,40,30,20,80},ans=0;
   
   //  METHOD  1
   for(int i=0;i<5;i++)
   {
       ans+=*(a+i);
   }
   printf("Sum of Elements is : %d\n",ans);
   
   // METHOD  2
   ans=0;
   int *p;
   for(p=&a[0];p<=&a[4];p++)
   {
       ans+=*p;
   }
   printf("Sum of Elements is : %d\n",ans);
   
   // METHOD  3
   ans=0;
   for(p=a;p<=a+4;p++)
   {
       ans+=*p;
   }
   printf("Sum of Elements is : %d",ans);
   return 0;
}

/*  OUTPUT 
 
   Sum of Elements is : 180
   Sum of Elements is : 180
   Sum of Elements is : 180
   
*/


