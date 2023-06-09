#include<stdio.h>
int main()
{
	int count=0,max,n,i,b[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}

	

