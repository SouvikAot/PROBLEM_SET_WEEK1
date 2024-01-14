#include<stdio.h>
int main()
{
	int sum=0,n;
	printf("ENTER NUMBER");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("SUM OF N NUMBER NATURAL NUMBER IS %d",sum);
}
