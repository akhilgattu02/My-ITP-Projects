#include <stdio.h>
#include <stdlib.h>
void interleave(void* output_arr, void* input_arr1, void* input_arr2, size_t arr1_size, size_t arr2_size, size_t elem_size)
{
	int length_output_arr = arr1_size + arr2_size;
	output_arr = (char*)malloc(length_output_arr*(elem_size));
	unsigned int a,b,i,j,k;
		for(i = 0; i < arr2_size; i++)
		{
		    *((char*)output_arr + (2*i)) = *(((char*)input_arr1)+i); 
		}
		if(arr1_size > arr2_size + 1)
		{
			for(j = (2*arr2_size); j < length_output_arr; j++)
			{
				*((char*)output_arr+j) = *((char*)input_arr1 + j - (arr2_size));
			}	
		}
		else
		{
			for(k = arr2_size; k < arr1_size; k++)
			{
				*((char*)output_arr + (2*k)) = *((char*)input_arr1+k);
			}
		}
			
        for( a = 0; a < arr2_size; a++)
	{
		    *((char*)output_arr + ((2*a)+1)) = *(((char*)input_arr2)+a);
	}
	
        for(b = 0; b < length_output_arr; b++)
        {
                printf("%d\n", *(((char*)output_arr)+b));
        }
	

 
}
int main()
{
	char arr_1[] = {1,2,3,4,6,7,8,9,10,11,122,123};
	char arr_2[] = {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	char *output_arr;
	size_t arr1_size;
	size_t arr2_size;
	arr1_size = sizeof(arr_1)/sizeof(char);
	arr2_size = sizeof(arr_2)/sizeof(char);
	if(arr2_size > arr1_size)
	{
		interleave(output_arr, arr_2, arr_1, arr2_size, arr1_size, sizeof(char));	
	}
	else interleave(output_arr, arr_1, arr_2, arr1_size, arr2_size, sizeof(char));
	return EXIT_SUCCESS;
}
