#include <stdio.h>
#include <stdlib.h>
#define size 10000
int main()
{
        printf("Enter a string:\n");
	int vowel[5] = {0, 0, 0, 0, 0};
	char string[size];
	scanf("%s", string);
	int length = 0;

	while (string[length] != '\0')
	{
		length++;
	}

	for (int i = 0; i < length; i++)
	{
		if (string[i] == 'A' || string[i] == 'a')
		{
		        vowel[0] = vowel[0] + 1;
		}
		else if (string[i] == 'E' || string[i] == 'e')
		{
			vowel[1] = vowel[1] + 1;
		}
		else if (string[i] == 'I' || string[i] == 'i')
		{
			vowel[2] = vowel[2] + 1;
		}
		else if (string[i] == 'O' || string[i] == 'o')
		{
			vowel[3] = vowel[3] + 1;
		}
		else if (string[i] == 'U' || string[i] == 'u')
		{
			vowel[4] = vowel[4] + 1;
		}
	}

	printf("A:%d\n", vowel[0]);
	printf("E:%d\n", vowel[1]);
	printf("I:%d\n", vowel[2]);
	printf("O:%d\n", vowel[3]);
	printf("U:%d\n", vowel[4]);
	printf("No of words:\n%d", length);
        return EXIT_SUCCESS;
}
