#include<stdio.h>

int main()
{
	int a=2,b=2;
	
	int c= a++ + ++b;
	printf("a=%d b=%d c=%d\n",a,b,c);
/*	
//Bad code
	int d=2;
	int e=d + d++;	//undefined
	printf("d=%d e=%d\n",d,e);

//Bad code
	int f=2;
	int g=f + ++f;	//undefined
	printf("f=%d g=%d\n",f,g);
}
*/