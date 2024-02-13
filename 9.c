//standard functions
//unformatted IO
#include<stdio.h>

int main()
{
	printf("Enter a character\n");
	char ch=getc(stdin);
	printf("The character read is:");
	putc(ch,stdout);
}