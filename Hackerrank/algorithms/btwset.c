#include<stdio.h>
int main()
{
	int na,nb,a[10],b[10],a1[101],t=0,i=0,j=0,nc,count=0;
	scanf("%d %d",&na,&nb);
	for(i=0;i<na;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<nb;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<na;i++)
	{
		for(j=0;j<na;j++)
		{
			a1[t]=a[i]*a[j];
			t++;
		}
	}
	for(i=0;i<t;i++)
	{
		nc=0;
		for(j=0;j<nb;j++)
		{
			if(b[j]%a1[i]==0)
			{
				nc++;
			}
			else
				break;
		}
		if(nc==nb)
		{
			count++;
			printf("%d ",a1[i]);
		}
	}
	printf("\n%d\n",count);
	return 0;
}
