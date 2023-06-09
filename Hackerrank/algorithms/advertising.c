#include<stdio.h>
int main(void)
{
	int n,k,sum,i,j;
	scanf("%d",&n);
	sum=0;
	k=5;
	for(i=0;i<n;i++)
	{
		j=(k/2);
		sum=sum+j;
		k=(j*3);
	}
	printf("%d\n",sum);
	return 0;
}
