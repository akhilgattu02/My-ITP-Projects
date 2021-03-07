#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	printf("Enter a string:\n");
	char string[250];
	fgets(string, 250, stdin);
	FILE *fptr;
       	if((fptr = fopen("morseTable.txt","r")) == NULL) printf("Sorry! Unable to open the file!.");
	else
	{
		int j = 0;
		long unsigned int i = 0;
		int flag = 0;
		while(i < strlen(string)-1)
		{
			while(feof(fptr)==0)
			{
				char x;
				char morseCode[20];
			        fscanf(fptr,"%c  %s\n", &x,morseCode);
	 char lower_case[26] = {'a','b','c', 'd', 'e' ,'f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
         char upper_case[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	                             for(int a =0; a < 26; a++)
				     {
					if(string[i] == lower_case[a])
					 {
					        string[i] = upper_case[a];
						break;
					 }
				     }

					if(x == string[i])
					{
						printf("%s ", morseCode);
						flag = 1;
					}
				     
					
				
			}
			if(flag==0)
			{
				printf("/");
				flag = 0;
			}
			fseek(fptr, 0, SEEK_SET);
			i = i+1;
			flag = 0;
		}
	}
        return EXIT_SUCCESS;
}
