//Range of data types

#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
	printf("Max signed int %d\n",INT_MAX);
	printf("Min signed int %d\n",INT_MIN);
	printf("Max unsigned int %u\n",UINT_MAX);
	printf("Max signed char %d\n",CHAR_MAX);
	printf("Min signed char %d\n",CHAR_MIN);
	printf("Max signed float %e\n",FLT_MAX);
	printf("Min signed float %e\n",FLT_MIN);	
	printf("Max signed double %le\n",DBL_MAX);
	printf("Min signed double %le\n",DBL_MIN);
	printf("Max long int %ld\n",LONG_MAX);
	printf("Max long long int %lld\n",LLONG_MAX);
	printf("Min long int %ld\n",LONG_MIN);
	printf("Min long int %lld\n",LLONG_MIN);
	printf("Max short int %hd\n",SHRT_MAX);
	printf("Min short int %hd\n",SHRT_MIN);
	printf("Max unsigned short int %u\n",USHRT_MAX);
	
}