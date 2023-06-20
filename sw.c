#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	printf("1.addition");
	printf("\n2.substraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\n\n enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("addition of a and b is:%d",a+b);
			break;
		case 2:
			printf("\n substraction of a and b is:%d",a-b);
			break;
		case 3:
			printf("\n multiplication of a and b is:%d",a*b);
			break;
		case 4:
			printf("\n division of a nad b is :%d",a/b);
			break;
		default:
			printf("\n wrong input...");
			break;
		
	}
}