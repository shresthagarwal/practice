#include<stdio.h>
int main()
{
	int t,n[10],k[10],ti[1000],i,j,sum[10];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&n[i],&k[i]);
		sum[i]=0;
		for(j=0;j<n[i];j++)
		{
			scanf("%d",&ti[j]);
			if(ti[j]<=0)
                        {

                                sum[i]++;
                        }

		
		}
	        
	
	}
	
	for(i=0;i<t;i++)
	{
		if(sum[i]>=k[i])
		{	printf("NO\n");}
		else
		{	printf("YES\n");}
	}
	return 0;
}
