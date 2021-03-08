#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int IsHeterogram(char string[])
{
	int n=strlen(string);
	char *p = &(string[0]);
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(*p == string[j])
			{
				return 1;

			}
			if(i==n-2 && j==n-1)
			{
				if(string[i]!=string[j])
				{
					return 0;
				}
			}
		}
		p=p+1;
	}
}
int main()
{
	char string[100];
	printf("Enter a string:\n");
	scanf("%s",string);
	int check=IsHeterogram(string);
	if(check==1)
	{
		printf("Your string is not a heterogram!\n");
	}
	if(check==0)
	{
		printf("Your string is a heterogram!\n");
	}

	return EXIT_SUCCESS;
}
