#include<stdio.h>
struct bill{
	char name[50];
	int number,rate,qty;
	float a,d,b,g,n;
};

int main()
{
	struct bill z[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter a Name :");
		scanf("%s",&z[i].name);
		printf("Enter a number :");
		scanf("%d",&z[i].number);
		printf("Enter a rate :");
		scanf("%d",&z[i].rate);
		printf("Enter a qty :");
		scanf("%d",&z[i].qty);
	printf("\n");
	}

	printf("Name\tNumber\tRate\tQuantity\tAmount\tDiscount\tBillamt\tGST\tNetbill");
	
	for(i=0;i<2;i++)
	{
		z[i].a=(float)z[i].rate*z[i].qty;
		z[i].d=(float)(z[i].a*5)/100;
		z[i].b=(float)z[i].a-z[i].d;
		z[i].g=(float)(z[i].b*18)/100;
		z[i].n=(float)z[i].b-z[i].g;
	
	
	printf("\n%s\t%d\t%d\t%d\t\t%.2f\t%.2f\t\t%.2f\t%.2f\t%.2f",
		z[i].name,z[i].number,z[i].rate,z[i].qty,z[i].a,
		z[i].d,z[i].b,z[i].g,z[i].n);	
	}
}