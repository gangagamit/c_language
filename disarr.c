#include<stdio.h>
#define n 5
int dis(int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
int main()
{
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("enter val:");
		scanf("%d",&a[i]);
	}
	dis(a);
	return 0;

}