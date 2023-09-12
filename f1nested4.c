#include<stdio.h>
int nested4()
{
	int i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			printf("\t%c",i,j);
		}
	printf("\n");
	}
}
int main()
{
	nested4();
}