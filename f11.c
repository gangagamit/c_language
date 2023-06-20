#include<stdio.h>
int add(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("perfect number");
	}	
	else
	{	
		printf("\nnot perfect number");
	}
		 
	
}
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	add(n);
}