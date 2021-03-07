#include <stdio.h>
#include <stdlib.h>
struct vector_t
{
	double *v;
	unsigned int d;
};
typedef struct vector_t vector_t;
void initializeVector(vector_t *vector, unsigned int d, double a);
int main()
{
	vector_t vector;
	printf("Enter dimension of vector:\n");
	scanf("%u",&(vector.d));
	initializeVector(&vector,vector.d, 5);
	for(int i=0; i<vector.d; i++)
	{
		printf("Component %d of vector is: %lf\n",i+1,*((vector.v)+i));
	}

}
void initializeVector(vector_t *vector, unsigned int d, double a)
{
	vector->v=(double*)malloc(d*(sizeof(unsigned int)));
	for(int i=0;i<d;i++)
	{
		*((vector->v)+i)=a;
	}


}
