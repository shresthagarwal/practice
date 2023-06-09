#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if(y>1917)
	{
		
	
		if(y%400==0||((y%4==0)&&(y%100!=0)))//leap year condition
	
		{
		
			printf("12.09.%d\n",y);
	
		}
	
		else
	
		{
		
			printf("13.09.%d\n",y);
	
		}
	}
	if(y>=1700&&y<=1917)
	{
		if(y%4==0)
		{
			printf("12.09.%d\n",y);
		}
		else
		{
			printf("13.09.%d\n",y);
		}
	}

	return 0;
}
