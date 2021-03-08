#include <stdio.h>
#include <stdlib.h>
int main()
{
	double **matrix;
	unsigned int m,n;
	printf("Enter m:\n");
	scanf("%u",&m);
	printf("Enter n:\n");
	scanf("%u",&n);
	matrix=(double**)malloc(m*sizeof(double*));
	for(int i=0; i<m; i++)
	{
		
		(matrix[i]) = (double*)malloc(n*sizeof(double));


	}	
	for(int j=0; j<m; j++)
	{
		for(int k=0; k<n; k++)
		{
			matrix[j][k]=20;
		}
	}
	printf("Your matrix with all elements set to 20 is:\n");
	for(int l=0; l<m; l++)
	{
		for(int o=0; o<n; o++)
		{
			printf("%lf ", matrix[l][o]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;

}
