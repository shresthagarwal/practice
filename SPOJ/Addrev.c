#include<stdio.h>
int main()
{
	int t,a1[100],a2[100];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{

	        scanf("%d\t%d",&a1[i],&a2[i]);
	}
	for (int j=0;j<t;j++)
	{
		int b1=0,b2=0,n=0,c=0;
		while(a1[j])
	
		{
		
			b1=b1*10+(a1[j] %10);
		
			a1[j]=(a1[j]/10);
	        }
	
		while(a2[j])
        
		{

                
			b2=b2*10+(a2[j] %10);
                
			a2[j]=(a2[j]/10);
        
		}
	
		n=b1+b2;
	
		c=0;
		while(n)
        
		{
                
			c=c*10+(n %10);
                
			n=(n/10);
       
	       	}
	
		printf("%d\n",c);

	}
	return 0;
}
		
	
