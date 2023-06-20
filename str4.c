#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j=0;
	printf("enter string:");
	gets(a);
	int k=strlen(a);
	 i=0;
	 j=k-1;
	while(i<k/2)
	{
		printf("%c%c",a[i],a[j]);
		i++;
		j--;
	}
	if(k%2!=0)
		
		printf("%c",a[k/2]);
		
	return 0;	
}