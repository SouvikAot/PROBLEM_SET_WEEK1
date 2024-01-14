#include<stdio.h>
int serires(int n)
{
	int a=14;
	int i;
	printf("%d\t",a);
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			a=a*2;
		}
		else
		{
			a=a-8;
		}
	printf("%d\t",a);
	}
}
int main()
{
	int n;
	printf("ENTER TERM UP TO");
	scanf("%d",&n);
	
	serires(n);
}
