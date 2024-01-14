#include<stdio.h>
int main()
{
	int n, a=0, b=0,i;
	printf("ENTER  NUMBER");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			if(i>1)
			{
				a=a+2;
			}

		}
		else
		{
			b=a/2;		
		}
		
		if(i%2!=0)
	{
		printf("%d\t",a);
	}
	else
	{
		printf("%d\t",b);
	}
	}
	
	
}
