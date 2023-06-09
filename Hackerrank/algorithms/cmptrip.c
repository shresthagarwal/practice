#include<stdio.h>
int main()
{
	int a[3],b[3],aw=0,bw=0;
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++)
        {
                scanf("%d",&b[i]);
        }
	for(int i=0;i<3;i++)
        {
		if(a[i]>b[i])
		{
			aw++;
		}
		else if(a[i]<b[i])
		{
			bw++;
		}

         
        }
	printf("%d %d\n",aw,bw);
	return 0;
}
