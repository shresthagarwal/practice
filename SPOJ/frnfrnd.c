#include<stdio.h>
int main()
{
	int r,flag=1,l=0,t,fid[100],nff[100],ffid[100][100],a[100],k=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		
		scanf("%d %d ",&fid[i],&nff[i]);
		for(int j=0;j<nff[i];j++)
		{
			scanf("%d",&ffid[i][j]);
		}
	}
	for(int i=0;i<t;i++)
        {

                for(int j=0;j<nff[i];j++)
                {
                        a[k]=ffid[i][j];
			k++;
                
		}
        }
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
		
		}
		         
                if(flag==1)
                {
                        l++;
                }

	
	}
	printf("%d \n",l);
        return 0;
}
		
