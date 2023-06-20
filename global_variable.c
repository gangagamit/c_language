#include<stdio.h>
int maths,sci,eng,total;
float per;
void dis()
{
	printf("maths\tsci\teng\ttotal\tper\n");
	printf("%d\t%d\t%d\t%d\t%.2f\n",maths,sci,eng,total,per);
}
void clac(int total)
{
	total=maths+sci+eng;
	per=(float)total/3;
	dis();
}
void setdata()
{
	printf("enter maths mark:");
	scanf("%d",&maths);
	printf("enter science mark:");
	scanf("%d",&sci);
	printf("enter english mark:");
	scanf("%d",&eng);
	clac();
}
int main()
{
	setdata();
}