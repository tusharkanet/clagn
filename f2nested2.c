#include<stdio.h>
int nested2()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=1;j--)
		{
			printf("\t%d",i);
		}
	printf("\n");
	}
}
int main()
{
	int x=nested2();
}