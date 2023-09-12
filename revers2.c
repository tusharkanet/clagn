#include<stdio.h>
int reverse()
{
	char x[50],y[50];
 	int i,k,j ;
 	printf("enter string =");
	scanf("%s",x);
	for(j=0;x[j]!='\0'; j++);
	k=j;
	for(i=0; i<j; i++)
  	{
    		y[i]=x[--k];
  	}  
  	y[i]='\0';
  	printf("\nReverse = %s",x);
}
int main()
{   
	 reverse();
}    