#include<stdio.h>
int main()
{
	int i,j,swap,flag=0,m,n,k[1000],u[1000],b,t=0,s[1000000],max=0;
	scanf("%d %d %d",&b,&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=0;i<n;i++)
        {
                scanf("%d",&u[i]);
        }
	for(i=0;i<m;i++)//all sum cases
	{
		for(j=0;j<n;j++)
		{
			s[t]=(k[i]+u[j]);
			t++;//would actually become (needed+1) so treat normally
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d ",s[i]);
	}
/*	for(i=0;i<t;i++)//sort
	{
		for(j=0;j<t-1;j++)//j<4 important NOT j<5
		{
			if(s[j+1]<s[j])
			{
				swap=s[j];
				s[j]=s[j+1];
				s[j+1]=swap;

			}
		}
	}
	for(i=t-1;i>=0;i--)
	{
		if(s[i]<b)
		{
			max=s[i];
			flag=1;
			break;
		
	        }
	}
	if(flag==1)
	{
		printf("%d\n",max);
	}
	else if(flag==0)
	{
		printf("-1\n");
	}*/
	return 0;
}







