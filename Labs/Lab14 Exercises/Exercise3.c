#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Polynomial_t 
{
	unsigned int degree;
	double *coefficients;
}Polynomial_t;
double FunctionValue(Polynomial_t Polynomial, double a)
{
	double sum = 0;
	for(int i=0; i <= Polynomial.degree; i++)
	{
		sum = sum + (*((Polynomial.coefficients)+i))*(pow(a,i));
	}
	return sum;
}
double FindRealRoot(Polynomial_t Polynomial, double a, double b, double precision)
{

				if(FunctionValue(Polynomial,a)==0)
				{
					return a;
				}
				else if(FunctionValue(Polynomial,(a+b)/2)==0)
				{
					return (a+b)/2;
				}
				else if(FunctionValue(Polynomial, b)==0)
				{
					return b;
				}
				else if((b-a) < precision)
				{
					return a;
				}
				else if(FunctionValue(Polynomial,a) * (FunctionValue(Polynomial,(a+b)/2)) < 0)
				{
					return FindRealRoot(Polynomial, a, (a+b)/2, precision);
				}
				else if(FunctionValue(Polynomial,(a+b)/2)*(FunctionValue(Polynomial,b)) < 0)
				{
					return FindRealRoot(Polynomial , (a+b)/2, b, precision);
				}
			

}
int main()
{
	Polynomial_t User;
	printf("Enter degree of polynomial:\n");
	scanf("%u",&User.degree);
	User.coefficients = (double *)malloc((User.degree+1)*sizeof(double));
	for(int i=0; i<=User.degree; i++)
	{
		printf("Enter coefficient of x^%d:\n",i);
		scanf("%lf",(User.coefficients+i));
	}
	printf("f(x) = ");
	for(int i=0; i<=User.degree; i++)
	{
		if(i!=User.degree)
		{
			printf("(%lf)x^(%d)+",*(User.coefficients+i),i);
		}
	        if(i==User.degree)
		{
			printf("(%lf)x^(%d)\n",*(User.coefficients+i),i);
		}	
	}
	double LowerInput, HigherInput;
	printf("Enter your interval in the form [a,b] where a < b\n");
	printf("Enter a:\n");
	scanf("%lf", &LowerInput);
	printf("Enter b:\n");
	scanf("%lf",&HigherInput);
	if(FunctionValue(User, LowerInput) * FunctionValue(User,HigherInput) > 0)
	{
		printf("No root exists in the given interval!");
	}
	else
	{
		printf("Enter precision of root:\n");
		double precision;
		scanf("%lf", &precision);
		double root = FindRealRoot(User, LowerInput, HigherInput, precision);
		printf("Root of polynomial in [%lf,%lf] is %lf", LowerInput, HigherInput,root);
	}


	return EXIT_SUCCESS;
}
