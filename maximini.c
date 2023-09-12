// Minimum & maximum number with array in  function

#include<stdio.h>
#define n 5
int x[n],i;
int mini()
{
	int a=x[0];
	for(i=0;i<n;i++)
	{
	if(a>x[i])
	{	a=x[i];}
	}
	return a;
}
int maxi()
{
	int b=x[0];
	for(i=0;i<n;i++)
	{
	if(b<x[i])
	{	b=x[i];}
	}
	return b;
}
int dis(int x[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
}
int main()
{
	for(i=0;i<n;i++)
	{
		printf("enter a value:");
		scanf("%d",&x[i]);
	}
	dis(x);
	printf("\n Minimum number is:%d",mini());
	printf("\n Maximum number is:%d",maxi());
}