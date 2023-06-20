#include<stdio.h>
int c1();
int main()
{
	c1();
}
int c1()
{
	char i;
	for(i=0;i<=24;i+=2)
	{
		if(i%4==0)
		{
			printf(" %c ",i+65);
		}
		else
		{
			printf(" %c ",i+97);
		}		
	}
}