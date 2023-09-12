#include<stdio.h>
void nested1()
{
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("\t%d",i,j);
		}
		printf("\n");
	}
}
int main()
{
	nested1();
}