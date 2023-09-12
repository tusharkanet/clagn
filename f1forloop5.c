#include<stdio.h>
int number()
{
	int i,n;
	printf("Enter number : ");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		printf("\t%d",i);
	}
}
int main(){
	number();
}
 