#include<stdio.h>
int main()
{
	int i,a[100],t;
	float pf,nf,zf,p=0,n=0,z=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<t;i++)
	{
		if(a[i]>0)
		{	p++;}
		else if(a[i]<0)
		{	n++;}
		else if(a[i]==0)
		{	z++;}
	}
	
	pf=(p/t);
	nf=(n/t);
	zf=(z/t);
        printf("%f\n",pf);
	printf("%f\n",nf);
        printf("%f\n",zf);
	return 0;
}


