#include<stdio.h>
int main()
{
	int t,i,q,n[100],m[100],s[100];
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d %d %d",&n[i],&m[i],&s[i]);
	}
	for(i=0;i<q;i++)
	{
	       t=s[i]+(m[i]%n[i])-1-n[i];
               if(m[i]%n[i]==0&&s[i]==1)
		       printf("%d\n",n[i]);
	       else
	       {
		       if(t>0)
	        
			       printf("%d\n",t);
               
		       else if(t<=0)
	        
			       printf("%d\n",(s[i]+(m[i]%n[i])-1));
	       }
        }	       
       return 0;
}


