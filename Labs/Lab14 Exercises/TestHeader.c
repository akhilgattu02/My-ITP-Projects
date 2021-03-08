#include <stdio.h>
#include "myFirstHeader.h"
int Min(int a, int b)
{
	if(a > b) return b;
	else return a;
}
int Max(int a, int b)
{
	if(a > b) return a;
	else return b;
}
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void SortArrayAscending(int *array, int size)
{

	for(int i = 0; i < size-1; i++)
	{
		int min = i;
		for(int j = i+1; j < size; j++)
		{
			if(*(array+j) < *(array+min)) 
			{
				min = j;
			}
		}
		swap(array+i, array+min);
		
	}
}

