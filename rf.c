#include<stdio.h>
int f1(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return f1(n-1)+f1(n-2);
}
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	printf("%d",f1(i));
	
	
	
}