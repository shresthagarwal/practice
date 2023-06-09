#include<stdio.h>
int main()
{
	int i,n,d,m,cho[100],sum=0,j,no=0,n1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&cho[i]);
	}
	scanf("%d %d",&d,&m);
	for(i=0;i<n;i++)
	{
		sum=0;
		n1=0;
		for(j=i;j<i+m;j++)
		{
			sum=sum+cho[j];
			n1++;
			if(j==n-1)
			{
				break;
			}
		}
		printf("sum= %d n1=%d\n",sum,n1);
		if((n1)!=(m))
			goto ha;
		else if(sum == d)
		{
			no++;
		}
		ha:
		;
	}
	printf("%d\n",no);
	return 0;
}


		
			
