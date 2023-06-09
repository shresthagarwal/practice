#include<stdio.h>
int main()
{
	int i,j,a[100][100],n,d1=0,d2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
		
			if(i==j)
		
			{
			
				d1=d1+a[i][j];
		
			}
		
			if(i==n-1-j)
		
			{
			
				d2=d2+a[i][j];
		
			}
		}
	
		
	}
	int k=(d1-d2);
	if(k>=0)
	{
		printf("%d\n",k);
	}
	else if(k<0)
	{
		printf("%d\n",-k);
	}
	return 0;
}


