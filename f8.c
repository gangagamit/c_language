#include<stdio.h>
float add(int a,float b )

{
	printf("mul: %2f",a*b);	
}
int main()
{
	int a;
	float b;
	printf("enter a and b:");
	scanf("%d %f",&a,&b);
	add(a,b);	
}