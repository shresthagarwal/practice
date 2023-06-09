#include<stdio.h>
int main()
{
	int i,a[5],swap,j;
	int min=0,max=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)//sort
	{
		for(j=0;j<4;j++)//j<4 important NOT j<5
		{
			if(a[j+1]<a[j])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;

			}
		}
	}
	max=(a[1]+a[2]+a[3]+a[4]);
	min=(a[0]+a[1]+a[2]+a[3]);	
	printf("%ld %ld\n",min,max);//%ld important
	
	return 0;
}

