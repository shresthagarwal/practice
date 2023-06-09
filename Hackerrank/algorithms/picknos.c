#include<stdio.h>
int main()
{
	int n,a[100],swap,i,j,sum[100],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	temp=a[n-1];
	for(i=0;i<n;i++)
	{		
		for(j=n-1;j>=0;j--)
		{
			if(temp-a[j-1]==1||temp-a[j]==0)
			{
				sum[i]++;
			}
			else if(temp-a[j-1]>1)
			{
				temp=a[n-i-2];
				break;
			}
		}
	}
	for(i=0;i<n;i++)
        {
                for(j=0;j<n-1;j++)
                {
                        if(sum[j]>sum[j+1])
                        {
                                swap=sum[j];
                                sum[j]=sum[j+1];
                                sum[j+1]=swap;
                        }
                }
        }
	if(sum>100)
		printf("100\n");
	else
	printf("%d\n",sum[n-1]);
      	return 0;
}

