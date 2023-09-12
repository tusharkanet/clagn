#include<stdio.h>
int fibonaci(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibonaci(n-1)+fibonaci(n-2);
	}
}
int main()
{
	int i,k;
	
	printf("enter the number = ");
	scanf("%d",&k);
	
	for(i=0; i<k; i++)
	{
		printf("%d ",fibonaci(i));
	}
}
