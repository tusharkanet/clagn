#include<stdio.h>
int reverse()
{
	int i,n,j=0;
	printf("Enter a number :");
	scanf("%s",&n);
	i=0;
	while(n!='\0')
	{	
		i++;
	}
	j=i-1;
	printf("\n Length is :%d",i);
	
	
}
void main()
{
	reverse();
}
