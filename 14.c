#include<stdio.h>

int main()
{
//Mixed mode arithmetic
	printf("%d %d %f %f %f\n",5/2,5%2,5/2.0f,5.0f/2,5.0f/2.0f);
	int num1=2,num2=5;
	float ratio=(float)num1/num2;
	printf("Ratio=%f\n",ratio);

	//int a=5,b=10,c=25;	
	//printf("%d %d %d\n",a,b);	//undefined
	//printf("%d %d\n",a,b,c);	//c will be ignored	
	//printf("%f\n",a);			//undefined
}