#include<stdio.h>
int add(int n)
{
	int a[]={2000,500,200,100,50,20,10,5,2,1},i,p;
	for(i=0;i<10;i++)
	{
		if(n>=a[i])
		{
			p=n/a[i];
			printf("\n %d-%d",a[i],p);
			n=n%a[i];
		}
	}
}
int main()
{
	int a[]={2000,500,200,100,50,20,10,5,2,1},i,p,n;
	printf("enter amount:");
	scanf("%d",&n);
	add(n);
}