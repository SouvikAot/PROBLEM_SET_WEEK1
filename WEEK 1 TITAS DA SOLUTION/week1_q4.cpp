#include<stdio.h>
int main()
{
	int res=1,n,a=1,b=2,c ;
	printf("ENTER NUMBER OF TERM \n");
	scanf("%d", &n);
	printf("%d\t%d\t", a,b);
	for(int i=3; i<=n; i++)
	{
		c=a*b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	
}
