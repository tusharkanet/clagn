#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a value :");
	scanf("%d",&n);
	i=2;
	do{
		printf("\n%d",i);
		i+=2;
	}while(i<=n);
}