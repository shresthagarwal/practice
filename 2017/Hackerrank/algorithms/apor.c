#include<stdio.h>
int main()
{
	int i=0,s,t,a,b,m,n,apple[1000001],orange[1000001],counta=0,counto=0;;
	scanf("%d %d",&s,&t);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&apple[i]);
	}
	for(i=0;i<n;i++)
        {
                scanf("%d",&orange[i]);
        }
	for(i=0;i<m;i++)
	{
		if((apple[i]+a)<=t&&(apple[i]+a)>=s)
		{
			counta++;
		}
	}
	for(i=0;i<n;i++)
	{
		if((orange[i]+b)<=t&&(orange[i]+b)>=s)
		{	
			counto++;
		}
	}
	printf("%d\n%d\n",counta,counto);
	return 0;
}


