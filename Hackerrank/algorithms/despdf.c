#include<stdio.h>
#include<string.h>
int main()
{
	int h[26],len,i,j,n[10],max,temp;
	char al[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},s[10];
	for(i=0;i<26;i++)
	{
		scanf("%d",&h[i]);
	}
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		for(j=0;j<26;j++)
		{
			if(al[j]==s[i])
		        {
			        n[i]=j;
				break;
		
			}
		}
	}
	for(i=0;i<len;i++)
	{
		temp=n[i];
		n[i]=h[temp];
	}

	max=n[0];
	for(i=0;i<len;i++)
	{
		if(max<n[i])
		{
			max=n[i];
		}
	}
	printf("%d\n",(len*max));
	return 0;
}
		


		
	

