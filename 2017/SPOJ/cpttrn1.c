#include<stdio.h>
int main(void)
{
	int k,l[100],c[100],t;
	
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d\t%d",&l[k],&c[k]);
        }
	
	for(k=0;k<t;k++)
	{
		for(int i=0;i<l[k];i++)
	
		{
		
			if(i%2==0)
			{
				for(int j=0;j<c[k];j++)
		
			
				{	if(j%2==0)
				
					printf("*");
		        
				
					else
				
				        printf(".");
		
			
				}

		        }
			else
			{
				for(int j=0;j<c[k];j++)

                        {       if(j%2==0)
                                printf(".");

                                else
                                printf("*");

                        }

			
			}

		
			printf("\n");

	
		}
		printf("\n\n");
	
	}	
	return 0;
}


		

