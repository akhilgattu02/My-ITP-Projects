#include <stdio.h>
#include <stdlib.h>
#define size 1000
int main()
{
	char string[size];
	char string_dup[size];
	int left_rotations;
	printf("Enter the string:\n");
	scanf("%s", string);
	printf("Number of left rotations:\n");
	scanf("%d", &left_rotations);
	int length = 0;

	while (string[length] != '\0')
	{
		length = length + 1;
	}

	for (int j = 0; j < left_rotations; j++)
	{
		for (int i = 0; i < length - 1; i++)
		{
			string_dup[i] = string[i + 1];
		}
		string_dup[length - 1] = string[0];
		for (int copy = 0; copy < length; copy++)
		{
			string[copy] = string_dup[copy];
		}
	}

	printf("%s", string_dup);
	return EXIT_SUCCESS;
}