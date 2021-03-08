#include <stdio.h>
#include <stdlib.h>
int main()
{
	int length;
	int breadth;
	printf("Enter length(>=2):\n");
	scanf("%d", &length);
	printf("Enter breadth(>=2):\n");
	scanf("%d", &breadth);
	{
		for (int first_row = 0; first_row < length; first_row++)
		{
			printf("*");
		}
		printf("\n");
		for (int middle_rows = 0; middle_rows < breadth - 2; middle_rows++)
		{
			printf("*");
			for (int middle_space = 0; middle_space < length-2 ; middle_space++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		for (int last_row = 0; last_row < length; last_row++)
		{
			printf("*");
		}
	}
	return EXIT_SUCCESS;
}