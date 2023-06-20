#include<stdio.h>
int reverse(int n)
{
	int rev=0,r;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int rev=reverse(n);
	printf("the reverse number is %d",rev);
}