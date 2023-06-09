#include<stdio.h>
int main()
{
	int i,d,f,n,sum=0,k,b[10000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
		if((i+1)!=k)
		{
			sum=sum+b[i];
		}
	}
	d=(f-(sum/2));
	if(f==(sum/2))
	{
		printf("Bon Appetit\n");
	}
	else
	{
		printf("%d",d);
	}
	return 0;
}
