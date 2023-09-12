#include<stdio.h>
int number()
{
	int i,n;
	printf("Enter number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("\t%d",i);
	}
}
int main(){
	number();
}
 