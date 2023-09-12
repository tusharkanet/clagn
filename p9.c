#include<stdio.h>
int number()
{
	char i;
	
	for(i='A';i<='Z';i++)
	{
		printf("\t%c",i);
		printf("\t%d",i);
	}
}
int main(){
	number();
}
 