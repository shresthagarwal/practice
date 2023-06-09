#include<stdio.h>
int main()
{
	int n,r,q,a[100000],qr[500],i,j,swap1,swap2;
	scanf("%d %d %d",&n,&r,&q);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<q;i++)
	{
		scanf("%d",&qr[i]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0)
			{
				swap1=a[j+1];
				a[j+1]=a[j];
			}
			else if(j!=0&&j!=n-1)
			{
				swap2=a[j+1];
				a[j+1]=swap1;
				swap1=swap2;
			}
			else if(j==n-1)
			{
				a[0]=swap1;
			}
		}
	}
//	for(i=0;i<n;i++)
  //      {
               // printf("%d ",a[i]);
    //    }
	

	for(i=0;i<q;i++)
	{
		printf("%d\n",a[qr[i]]);
	}
	return 0;
}
