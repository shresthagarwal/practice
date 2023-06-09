#include<stdio.h>
int main()
{
	int n,i,g[1000],max,min,countmax,countmin;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&g[i]);
	}
	max=g[0];
	min=g[0];
	countmax=0;
	countmin=0;
	for(i=1;i<n;i++)
	{
		if(g[i]>max)
		{
			max=g[i];
			countmax++;
		}
		if(g[i]<min)
		{
			min=g[i];
			countmin++;
		}
	}
	printf("%d %d\n",countmax,countmin);
	return 0;
}
		
