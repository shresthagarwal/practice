#include<stdio.h>
int main()
{
	int n,a[1000];
	long long t=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t=t+a[i];
	}
	printf("%lld\n",t);
	return 0;
}
