#include<stdio.h>
#include<stdio.h>
int main()
{
	int n, i, res=1;
	printf("ENTER TERM UP TO ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		printf("%d\t%d\t",res,res);
		res+=4;
	}
	
}
