#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char filename[100];
	printf("Enter filename:");
	scanf("%s",filename);
	FILE *fptr; 
	if((fptr = fopen(filename,"r")) == NULL) printf("File didn't open successfully!");
	else
	{
	        int i = 0; 
		printf("Enter number of lines of text in file:\n");
		int length;
		scanf("%d",&length);
		int *array = (int*)malloc(length*sizeof(int));
		fseek(fptr, 0, SEEK_SET);
		while(i < length)
		{
			char buff[150];
			fgets(buff, sizeof(buff), fptr);
			array[i] = strlen(buff)-1; 
			i++;
		}
		for(int l = 0; l < length; l++)
		{
			printf("array[%d] is %d\n",l,array[l]);
		}
		int last = length-1;
		int a = array[last];
		int b = 0;
		while(b <= last)
		{
			fseek(fptr, -a-1, SEEK_END);
		        char string[100];
		        fgets(string, sizeof(string), fptr);
		        printf("%s",string);
			b = b+1;
			a = a + array[last - b]+1;
			
		}	 

		
	}
}

