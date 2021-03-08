#include <stdio.h>
#include <stdlib.h>
struct vector_t
{
        double *v;
        unsigned int d;
};      
typedef struct vector_t vector_t;
int main()
{       
        vector_t vector;
        printf("Enter length of your vector:\n");
        scanf("%u", &vector.d);
        vector.v=(double*)malloc(vector.d*sizeof(double));
        free(vector.v);
	return EXIT_SUCCESS;

}       
         
