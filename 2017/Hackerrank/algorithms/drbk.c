#include<stdio.h>
int main()
{
	int i=0,f=0,b=9876,n,p;
	scanf("%d",&n);
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(((2*i)+1)==p)
		{
			f=i;
		
		}
		if(2*i==p)
                {
			f=i;
                }

	}
	for(i=n;i>0;i--)
	{
		if(2*i==p)
		{
			b=((n/2)-i);
		}
		if(((2*i)+1)==p)
                {
                        b=((n/2)-i);
		}

	}
	if(f<=b)	
	{
		printf("%d\n",f);
	}
	else
	{
		printf("%d\n",b);
	}
	return 0;
}

