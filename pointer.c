#include<stdio.h>
int main()
{
	int a,b,*p,*q,c;
	p=&a;
	q=&b;
	printf("value of a:%d\n",a);
	scanf("%d",&a);
	
	printf("value of b:%d\n",b);
	scanf("%d",&b);

	c=*p;
	*p=*q;
	*q=c;
	printf("%d%d",*p,*q);
	
	
}