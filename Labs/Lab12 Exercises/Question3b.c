#include <stdio.h>
#include <stdlib.h>
void swap(double *a, double *b)
{
	double temp=*a;
	*a=*b;
	*b=temp;
}
void swapFirstInversion(double *num, unsigned int n)
{
	for(int i=0; i<=n-2;)
	{
		if(*(num+i)>*(num+i+1))
		{
			swap(num+i, num+i+1);
			break;
		}
		i++;
	}
}
void IterateFunction(void (*f)(double* , unsigned int), double *x, size_t arr_size, unsigned int d)
{
	
	for(int i=0; i<d; i++)
	{
		(*f)(x, arr_size);
	}
}
int main()
{
	double num[]={3,5,6,0,2,100,-3,-4,123,15.12};
	size_t arr_size=sizeof(num)/sizeof(double);
	printf("Original array is:\n");
	for(int i=0; i<arr_size; i++)
	{
		printf("%lf ",num[i]);
	}
	printf("\n");
	unsigned int d=((arr_size)*(arr_size-1))/2;
	printf("Array in increasing order:\n");
        IterateFunction(swapFirstInversion, num, arr_size, d);
	for(int k=0; k<arr_size; k++)
	{
		printf("%lf ",num[k]);
	}
	return EXIT_SUCCESS;
}
