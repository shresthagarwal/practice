#include<stdio.h>
int main()
{
	int n,a[100000],no[5],no1[5],i,j,swap,max;
	for(i=0;i<5;i++)
		no[i]=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		no[(a[i]-1)]++;
	}
	for(i=0;i<5;i++)
	{
	//	printf("%d ",no[i]);
		no1[i]=no[i];
	}
	//printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(no1[j]<no1[i])
			{
				swap=no1[j];
				no1[j]=no1[i];
				no1[i]=swap;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	//	printf("%d ",no1[i]);
	}
	max=no1[4];
	//printf("\nmax = %d\n",max);
	for(i=0;i<5;i++)
	{
		if(no[i]==max)
		{
			printf("%d\n",i+1);
			break;
		}
	}
	return 0;
}
	

