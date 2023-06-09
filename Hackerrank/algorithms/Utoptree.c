#include<stdio.h>
int main()
{
	int t,th[10],sum[10],i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&th[i]);
	}
	for(i=0;i<t;i++)
	{
		sum[i]=0;
		for(j=0;j<=th[i];j++)
		{
			if(j%2==0)
				sum[i]=sum[i]+1;
			if(j%2==1)
				sum[i]=2*sum[i];
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",sum[i]);
	}
	return 0;
}
