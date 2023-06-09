#include<stdio.h>
#include<stdlib.h>
long power(long n,long p)
{
	if(p==0)
	 n=1;
	else
	{
		for(int i=1;i<p;i++)
	
		{
		
			n=n*n;
	
		}
	}
	return n;
}
int main()
{
	long i,end,div,g,rev,d,dig,l,tot=0;
	scanf("%ld %ld %ld",&i,&end,&div);
	for(i;i<=end;i++)
	{
		g=i;
		rev=0;
		while(g>0)
		{
			rev=rev*10+g%10;
		        g=g/10;
		}
		if(abs(i-rev)%div==0)
			tot++;
	}
	printf("%ld\n",tot);
	return 0;
}

