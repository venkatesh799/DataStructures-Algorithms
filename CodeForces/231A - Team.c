/*

  Problem Statement  :  https://codeforces.com/problemset/problem/231/A
  
*/

#include<stdio.h>
int main()
{
	int n,ans=0,temp,final=0;
	scanf("%d",&n);
	while(n){
		for(int i=0;i<3;i++)
		{
			scanf("%d",&temp);
			if(temp == 1)
			{
				ans++;
			}
		}
		if(ans >= 2)
		{
			final++;
		}
		ans=0;
		n--;
	}
	printf("%d",final);
	return 0;
}
