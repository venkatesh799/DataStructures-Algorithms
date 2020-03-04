/*

https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem?isFullScreen=false

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	triangle temp1;
    int i=0,j=0;
    float  ans1[n],p,temp,k;
    //ans1=malloc(sizeof(4*n));
    for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        k=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        ans1[i]=k;
        //printf("Area of %d %d  %d is  %d\n",tr[i].a,tr[i].b,tr[i].c,k);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(ans1[j] > ans1[j+1])
            {
                temp=ans1[j];
                ans1[j]=ans1[j+1];
                ans1[j+1]=temp;

                temp1=tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=temp1;
            }
        }
    }
    
    
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
