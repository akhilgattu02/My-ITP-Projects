#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char *num_1, char *num_2)
{
	char temp = *(num_1);
	*(num_1) = *(num_2);
	*(num_2) = temp;
}
void left_rotated_num(char num_array[])
{
	int length = strlen(num_array);
	for(int i = 0; i < length - 1; i++)
	{
		swap(&num_array[i],&num_array[i+1]);
	}
	printf("%s", num_array);
}
int main()
{
	printf("Enter a positive integer n:\n");
	char input_number[200];
	scanf("%s",input_number);
	left_rotated_num(input_number);
	return EXIT_SUCCESS;
}
