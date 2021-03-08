#include <stdio.h>
#include <stdlib.h>
struct vector_t
{
	void* v;
	unsigned int d;
};
typedef struct vector_t vector_t;
enum BasicDataType {Char, Int, Float, Double};
void memoryAssign(vector_t *vector, unsigned int d, int t);
int main()
{
	vector_t vector;
	int t;
	printf("Enter dimension of vector:\n");
	scanf("%u",&vector.d);
	printf("Enter 0 for char vector, 1 for int vector, 2 for float vector, 3 for double vector:\n");
	scanf("%d",&t);
        memoryAssign(&vector, vector.d,t);
	return EXIT_SUCCESS;
	
}
void memoryAssign(vector_t *vector, unsigned int d, int t)
{
	if(t==Char)
	{
		vector->v=(char*)malloc(d*sizeof(unsigned int));
		for(int i=0; i<d; i++)
		{
			*((char*)(vector->v)+i)='A';
			printf("Element %d in vector of type char is:%c\n",i,*((char*)(vector->v)+i)); 
		}
	}
	else if(t==Int)
	{
		vector->v=(int*)malloc(d*sizeof(unsigned int));
                for(int i=0; i<d; i++)
                {
                        *((int*)(vector->v)+i)=i;
			printf("Element %d in vector of type int is:%d\n",i,*((int*)(vector->v)+i));
                }

	}
	else if(t==Float)
	{
		vector->v=(float*)malloc(d*sizeof(unsigned int));
                for(int i=0; i<d; i++)
                {
                        *((float*)(vector->v)+i)=i;
                        printf("Element %d in vector of type float is:%f\n",i,*((float*)(vector->v)+i));
                }

	}
	else if(t==Double)
	{
		vector->v=(double*)malloc(d*sizeof(unsigned int));
                for(int i=0; i<d; i++)
                {
                        *((double*)(vector->v)+i)=i;
                        printf("Element %d in vector of type double is:%lf\n",i,*((double*)(vector->v)+i));
                }

	}

}
