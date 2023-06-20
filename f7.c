#include<stdio.h>
int n1();
int main()
{
	n1();
}
int n1()
{
	int i=1,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		i=i+1;
		printf("\n %d",i);
	}
}