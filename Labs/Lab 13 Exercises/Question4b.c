#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	char string[12];
	FILE *fptr, *fnew;
        fptr=fopen("12letterwords.txt","r");
	fnew=fopen("12letter-Hgrams.txt","w");
	if(fptr==NULL) printf("File 12letterword.txt coudn't open\n");
	if(fnew==NULL) printf("File 12letter-Hgrams.txt couldn't open\n");
	else
	{
		int i=0;
		while(fscanf(fptr,"%s",string)!=EOF)
		{
			int x=IsHeterogram(string);
	               if(x==0)
	               {
		          fprintf(fnew,"Word %d is %s\n",i+1, string);
			  i=i+1;
	               }
		}
		fclose(fptr);
		fclose(fnew);
	}
	return EXIT_SUCCESS;
}
