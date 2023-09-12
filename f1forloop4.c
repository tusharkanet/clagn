#include<stdio.h>
int number()
{
	int i,n;
	printf("Enter number : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\t%d",i);
	}
}
int main(){
	number();
}
 