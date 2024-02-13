#include<stdio.h>

int main()
{
/* 	
	int a,b;
	printf("Enter 2 integers\n");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	
	int c;
	float d;
	printf("Enter an integer and a fractional value separated by a comma\n");
	scanf("%d,%f",&c,&d);
	printf("c=%d,d=%f\n",c,d);
*/
	
	int dd,mm,yy;
	printf("Enter date in dd-mm-yy format\n");
	int n=scanf("%d-%d-%d",&dd,&mm,&yy);
	printf("Date is %d-%d-%d\n",dd,mm,yy);
	printf("%d\n",n);
}