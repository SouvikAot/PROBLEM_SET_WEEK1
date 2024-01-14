#include<stdio.h>
int main()
{
	int b,e,res=1;
	printf("ENTER BASE");
	scanf("%d",&b);
	printf("ENTER EXPONENT");
	scanf("%d",&e);
	
	for(int i=1;i<=e;i++)
	{
		res=res*b;
	}
	printf("RESULT IS %d",res);
}
