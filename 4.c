#include<stdio.h>

int main()
{
	printf("Hi");
	printf("\nHello\n");
	
	int a=15;
	int b=25;
	printf("number1=%d\nnumber2=%d\n",a,b);
	printf("a=%d,b=%d\n",a,b);
	
	char c='A';
	printf("Character is %c & it's ASCII value is %d\n",c,c);
	
	float d=25.52;
	printf("d=%f d=%e d=%g\n",d,d,d);
	printf("d=%.1f d=%.3f d=%.0f\n",d,d,d);
	printf("d=%5.1f\n",d);
	
	double e=25.52;
	printf("e=%lf\n",e);
	
	int f=15;
	printf("%5d\n",f);	//Right justified, 5 is the field width
	printf("%-5dhi\n",f);	//minus flag-left justification, 5 field width
	
	int g=123456;
	printf("%-5dhi\n",g);
	
	printf("%+d\n",f);
	printf("%05d\n",f);	//0-zero flag, 5-field width
	
	printf("Int value=%d Octal value=%o Hex value=%x Hex value=%X\n",f,f,f,f);
	printf("Int value=%d Octal value=%#o Hex value=%#x Hex value=%#X\n",f,f,f,f);

	int n=printf("%d\n",f);
	printf("No. of characters printed in the previous line=%d\n",n);
}