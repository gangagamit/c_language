#include<stdio.h>
struct product
{
	int prdno,rate,qty,amt,dis,billamt,gst,netbill;
	char prdname[50];
};
int main()
{
	struct product a[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter product no:");
		scanf("%d",&a[i].prdno);
		printf("enter product name:");
		scanf("%s",&a[i].prdname);
		printf("enter rate:");
		scanf("%d",&a[i].rate);
		printf("enter qty:");
		scanf("%d",&a[i].qty);
	} 
	printf("\nprodno\tprodname\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill\n");
	for(i=0;i<2;i++)
	{
		a[i].amt=a[i].rate*a[i].qty;
		a[i].dis=a[i].amt/100*5;
		a[i].billamt=a[i].amt-a[i].dis;
		a[i].gst=a[i].billamt/100*18;
		a[i].netbill=a[i].billamt+a[i].gst;
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d",a[i].prdno,a[i].prdname,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);
	}
}