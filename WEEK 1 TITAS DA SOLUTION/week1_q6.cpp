#include<stdio.h>
int main()
{
	int i,n,res=1;
	printf("ENTER VALUE OF SERIES UPTO ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",res);
		res=res*2;
	}
}
