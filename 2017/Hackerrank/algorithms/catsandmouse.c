#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,in[100][3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&in[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(abs(in[i][2]-in[i][1])>abs(in[i][2]-in[i][0]))
			printf("Cat A");
		else if(abs(in[i][2]-in[i][1])<abs(in[i][2]-in[i][0]))
		{	printf("Cat B");
		}
		else if(abs(in[i][2]-in[i][1])==abs(in[i][2]-in[i][0]))
			printf("Mouse C");
	
	printf("\n");
	}
	return 0;
}




	
