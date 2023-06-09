#include<stdio.h>
int main()
{
	int count=0,i=0,j=0,swap,n,s[100],flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)//sort
	{
		for(j=0;j<n-1;j++)//j<4 important NOT j<5
		{
			if(s[j+1]<s[j])
			{
				swap=s[j];
				s[j]=s[j+1];
				s[j+1]=swap;

			}
		}
	}
	for(i=0;i<n;i++)
        {       
		if(flag==1)
		{
			flag=0;
		}
		else if(s[i]==s[i+1])
		{
			count++;
			flag=1;
		}
		

	}
	printf("%d\n",count);
	return 0;
}
