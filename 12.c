#include<stdio.h>

int main()
{
	int a=2,b=2;
	
	int c=a++;
	int d=++b;
	
	printf("a=%d c=%d\n",a,c);
	printf("b=%d d=%d\n",b,d);
	
	a++;
	++b;
	
	printf("a=%d c=%d\n",a,c);
	printf("b=%d d=%d\n",b,d);

/*
//Error	
	int x=2++;
	int y=(a+b)++;
*/
}