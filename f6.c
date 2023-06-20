#include<stdio.h>
int n1();
int main()
{
	n1();
}
int n1()
{
	int i=0,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		i=i+1;
		printf("\n %d",i);
	}
}