#include<stdio.h>
int main()
{
	int j,i,n,grades[60];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&grades[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<21;j++)//21 instead of 20 to include 100
		{
			if(grades[i]<38)
			{
				grades[i]=grades[i];

			}
			else if(0<((5*j)-grades[i])&&((5*j)-grades[i])<3)
   		        {
				grades[i]=(5*j);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",grades[i]);
	}
	return 0;
}



				


