#include<stdio.h>
int main(void)
{
	int i,k,n1[50],n2[50],n,j=1,f=0;
	printf("How many elements would you like input?\n");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d\n",&n1[i]);
		if (n1[i]==42)
		{
			j=0;
		}

		if (j==1)
		{
		
			n2[i]=n1[i];
			f++;
		}
		
	}
        
        for (k=0;k<f;k++)
	{
	        printf("%d\n",n2[k]);
	}

        return 0;
}
		

		

