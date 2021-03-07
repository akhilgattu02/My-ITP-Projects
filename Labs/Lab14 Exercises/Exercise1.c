#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	FILE *fptr_1,*fptr_2;
	if(argc==3)
	{
		fptr_1=fopen(argv[1],"a");
		fptr_2=fopen(argv[2],"r");
	}
	if(argc>3)
	{
		printf("Too many strings!");
	}
	if(argc<3)
	{
		printf("Too less arguments!");
	}
	if(fptr_1==NULL) printf("File %s failed to open!",argv[1]);
	if(fptr_2==NULL) printf("File %s failed to open!",argv[2]);
	while(feof(fptr_2)==0)
	{
                char x; 
		x=fgetc(fptr_2);
		if(x!=EOF) fprintf(fptr_1,"%c",x);
	}
	fclose(fptr_1);
	fclose(fptr_2);
	return EXIT_SUCCESS;
}
