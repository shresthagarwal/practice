#include<stdio.h>
int main()
{
	int n,d,a[100],no=0,i,j,temp;
	scanf("%d %d",&n,&d);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(i!=j)
			{
				temp=a[i]+a[j];
				if(temp%d==0)
			
				{
				
					printf("(%d,%d) %d\n",i,j,temp);
				
					no++;
			
				}
			}
				
		}
	}
	printf("%d\n",no);
	return 0;
}
		
