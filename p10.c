#include<stdio.h>
int number()
{
	int i;
	
	for(i=65;i<=90;i++)
	{
		printf("\t%c-%c",i,i+32);
	}
}
int main(){
	number();
}
 