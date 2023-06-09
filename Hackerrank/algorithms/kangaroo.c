#include<stdio.h>
int main()
{
	int i,a[4],flag=0;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}

	  for(i=0;i<10000;i++)
	  {
		  if(a[2]>a[0])
		  {
			  if((a[2]-a[0])+(a[3]*i)==(a[1]*i))
			  {
				  flag=1;
				  break;
			  }
	          }
		  if(a[0]>a[2])
                  {
                          if((a[0]-a[2])+(a[1]*i)==(a[3]*i))
                          {
                                  flag=1;
				  break;
                          }
                  }
		  if(a[0]==a[2])
		  {
			  if(a[1]==a[3])
			  {
				  flag=1;
				  break;
			  }
	          }
	  }
	  if(flag==1)
	  {
		  printf("YES\n");
	  }
	  else if(flag==0)
	  {
		  printf("NO\n");
	  }
	  return 0;
}
