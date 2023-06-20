#include<stdio.h>
#define n 5
int display(int a[])
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d",a[i]);
		}
		else
		{
			sum=a[i]+a[i-1];
			printf("\n%d\t%d",a[i],sum);
		}
	}
}
int main()
{
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter val:");
		scanf("%d",&arr[i]);
	}
	display(arr);
}