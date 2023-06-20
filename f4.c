#include<stdio.h>
int n1();
int main()
{
	n1();
}
int n1()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n %d",i);
	}
	
}