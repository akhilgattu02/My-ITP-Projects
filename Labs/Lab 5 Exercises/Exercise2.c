#include <stdio.h>
#include <stdlib.h>
#define size 10000
int main()
{
	int collect[size];
	printf("Enter the number of inputs to be scanned:\n");
	int num;
	scanf("%d",&num);
	printf("Input here:\n");
    for(int i=0;i<num;i++)
	{
		int input;
		scanf("%d",&input);
		collect[i]=input;
	}
	int max=collect[0];
	int min=collect[0];
	for(int j=0;j<num;j++)
	{
		if(max<collect[j])
		{
			max=collect[j];
		}
		if(min>collect[j])
		{
			min=collect[j];
		}
	}
	printf("Maximum of sequence is:%d\n",max);
	printf("Minimum is:%d\n",min);
	return EXIT_SUCCESS;
}