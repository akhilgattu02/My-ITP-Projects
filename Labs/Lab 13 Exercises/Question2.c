#include <stdio.h>
#include <stdlib.h>
typedef struct Element_t
{
	int atomicNumber;
	char symbol[4];
	char ElementName[30];
	char atomicMass[30];

}Element_t;
int main()
{
	Element_t Element;
	int flag=0;
	FILE *fptr=fopen("chemicalElements.txt", "r");
        int input;
	double atomicMass;
	if(fptr==NULL) printf("Sorry!Error opening file.");
	else
	{
		scanf("%d",&input);

		while(feof(fptr)==0)
		{
			fscanf(fptr,"%d\t%s\t%s\t%s\n", &Element.atomicNumber, Element.symbol, Element.ElementName, Element.atomicMass);
			if(Element.atomicNumber==input)
			{
			 	printf("Your element is %s whose symbol is %s.\n",Element.ElementName,Element.symbol);
				flag=1;
			}

		}
	}
	fclose(fptr);
	if(flag==0)
	{
		printf("You entered a number which isn't in (1,112)!");
	}

	return EXIT_SUCCESS;
}
