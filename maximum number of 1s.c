/* Find the row with maximum number of 1s
Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
Example:

Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Output: 2*/
 
 // Venkatesh thirunagiri
 #include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define R 4
#define C 4
void main()
{  
    bool a[R][C] = { {0, 0, 0, 1},  
                    {0, 1, 1, 1},  
                    {0, 0, 1, 1},  
                    {1, 1, 1, 1}}; 
    int i,j,max=0,maxr=0;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if(a[i][j])
            {
                if(R-j > max)
                {
                max=R-j;  //Since each row is sorted. We find the index of first instance of 1 in each row.
                maxr=i;   //the count of 1s will be equal to total number of columns minus the index of first 1.
                j=C+1;
                }
            }
        }
    
    }
    printf("%d",maxr);
}
