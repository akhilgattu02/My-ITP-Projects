#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void catenate(void *x, void *y);
void power(void *x, void *y);
void IteratedFunction(void (*f)(void *, void *), int d, void *x, void *y);
int main()
{
	double x,y;
	printf("Enter x:\n");
	scanf("%lf",&x);
	printf("Enter y:\n");
	scanf("%lf",&y);
	IteratedFunction(power,3,&x,&y);
	printf("%lf\n", x);
	int strlen_1,strlen_2;
	printf("Enter strlen(string_1)\n");
	scanf("%d",&strlen_1);
	printf("Enter strlen(string_2)\n");
	scanf("%d", &strlen_2);
	char *a=(char*)malloc(strlen_1*sizeof(char));
	char *b=(char*)malloc(strlen_2*sizeof(char));
	printf("Enter string_1:\n");
	scanf("%s", a);
	printf("Enter string_2:\n");
	scanf("%s", b);
	IteratedFunction(catenate, 3, a, b);
	printf("%s",a);
	return EXIT_SUCCESS;

}
void IteratedFunction(void (*f)(void*, void*),int d, void *x, void *y)
{
	for(int i=0; i<d; i++)
	{
		(*f)(x,y);
	}


}

void power(void *x, void *y)
{
       *(double *)x=pow(*(double*)x, *(double*)y);
}
void catenate(void *x, void *y)
{
	strcat((char*)x,(char*)y);
}
