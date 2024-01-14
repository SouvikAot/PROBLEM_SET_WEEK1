#include<stdio.h>
int main()
{
	int a=7 ,b=10,i,n;
	printf("TERM UPTO ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",a);
			a=a+1;
		}
		else
		{
			printf("%d\t",b);
			b=b+1;
		}
	}
}
