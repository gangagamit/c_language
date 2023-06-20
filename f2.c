#include<stdio.h>
int add();
int main()
{
	int x;
	printf("hello...\n");
	x=add();
	printf("x=%d\n",x);
	printf("\n hiii");
}
int add()
{
	int a,b;
	printf("enter a and b:"); 
	scanf("%d%d",&a,&b);
	return a+b;
}