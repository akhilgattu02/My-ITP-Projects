#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE *fptr=fopen("1000CommonWords.txt", "r");
	char words[30];
	if(fptr==NULL) printf("Sorry!File couldn't be opened.\n");
	else
	{
		while(fscanf(fptr,"%s",words)!=EOF)
		{
			if(strlen(words)==7)
					{
					printf("%s\n",words);
					}
		}
	}
	fclose(fptr);
	return EXIT_SUCCESS;
}
