#include<stdio.h>
int main()
{
	int n, i, a=21,b=9;
	printf("ENTER TERM UP TO");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",a);
		}
		else
		{
			printf("%d\t",b);
			b+=2;
		}
	}
}
