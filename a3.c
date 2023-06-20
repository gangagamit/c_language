#include<stdio.h>
int main()
{
	int i,eng[5],che[5],phy[5],total=0;
	float pr;
	for(i=0;i<5;i++)
	{
	printf("enter mark eng[%d]:",i);
	scanf("%d",&eng[i]);
	printf("enter mark che[%d]:",i);
	scanf("%d",&che[i]);
	printf("enter mark phy[%d]:",i);
	scanf("%d",&phy[i]);
	}
	printf("eng[i] che[i] phy[i] total pr grad ");
	for(i=0;i<5;i++)
	{
	total=eng[i]+che[i]+phy[i];
	pr=total/300*100;
	printf("\n %d %d %d %d %f",eng[i],che[i],phy[i],total,pr);
	if(eng[i]<35||che[i]<35||phy[i]<35||pr<35)
	{
	    printf("fail");
	}
	else if(pr>=75)
	{
	  printf("grad A");
	}
	else if(pr>=60)
	{
	  printf("grad B");
	}
	else if(pr>=45)
	{
	  printf("grad c");
	}
	else (pr>=60)
	{
	  printf("PASS");
	}
 	
      }
	printf("\n");

	}
	
}