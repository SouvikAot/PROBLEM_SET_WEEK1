#include<stdio.h>
int main()
{
	int n, i;
	char c='A';
	printf("ENTER N");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("BC%c%d\t",c,i);
		c++;
	}
}
