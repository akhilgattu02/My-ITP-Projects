#include <stdio.h>
#include <stdlib.h>
#include "myFirstHeader.h"
int main()
{
	printf("Enter a number:\n");
	int x,y;
	scanf("%d",&x);
	printf("Enter another number:\n");
	scanf("%d",&y);
	printf("Max no is %d, Min no is %d\n",Max(x,y),Min(x,y));
	printf("Enter size of array:\n");
	int size;
	scanf("%d",&size);
	int *array = (int*)malloc(size*(sizeof(int)));
	for(int i=0; i<size; i++)
	{
		printf("Enter element %d:\n",i);
		scanf("%d",array+i);
	}
	SortArrayAscending(array, size);
	for(int i=0; i < size; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
