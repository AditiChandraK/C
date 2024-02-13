#include<stdio.h>

int main()
{
	printf("\a");			//\a escape sequence
	printf("\\Hi\\");		//\\ escape sequence
	printf("\nh\bbi\n");	//\n and \b escape sequence
	printf("he\ri\n");		//\r and \n escape sequence
	printf("%%d\n");		//To print %d and \n escape sequence
	printf("\"Hi\"\n");		//\" and \n escape sequence
	printf("Hi\tHello\n");	//\t and \n escape sequence
}