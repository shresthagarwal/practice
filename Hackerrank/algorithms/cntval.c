//A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
#include<stdio.h>
int main()
{
	int i=0,n,flag=0,sum=0,val=0;
	char s[1000000];
	scanf("%d",&n);
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
	
		if(s[i]=='D')
		{
			sum--;
		}
		else if(s[i]=='U')
		{
			sum++;
		}
		if(sum<=-2)
		{
			flag++;
		
		}
		if(flag>0&&(sum==0))
		{
			flag=0;
			val++;
		}

	}
	printf("%d\n",val);
	return 0;
}
