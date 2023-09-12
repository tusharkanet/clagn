#include<stdio.h>
int currancy()
{
	int i;
	int a[]={2000,500,200,100,50,20,10};
	for(i=0;i<10;i++)
	{
		if(n>=a[i])
		{
			printf("%d :%d\n",a[i],(n/a[i]));
			n=n%a[i];
		}
	}
}
int main()
{
	int amt;
	printf("enter amount:");
	scanf("%d",&amt);
	currancy(amt);
}
