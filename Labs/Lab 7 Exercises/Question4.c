#include <stdio.h>
#include <stdlib.h>
double Factorial(double number);
double FallingFactorial(double number,double n);
double RealBinomialCoefficient(double number,double n);
int main()
{
     double x,n;
     printf("Enter x\n");
     scanf("%lf",&x);
     printf("Enter n\n");
     scanf("%lf",&n);
     if(x>=n)
     {
         printf("This is fallingFactorial(x,n)= %lf\n",FallingFactorial(x,n));
         printf("This is x choose n= %lf",RealBinomialCoefficient(x,n));
     }
     else
     {
         printf("Invalid input!x should be >=n!");
     }
     return EXIT_SUCCESS;

}
double Factorial(double number)
{
    if(number==0)
    {
        return 1;
    }
    else
    {
        return number*Factorial(number-1);
    }
    
}
double FallingFactorial(double number,double n)
{
    return Factorial(number)/((Factorial(number-n)));

}
double RealBinomialCoefficient(double number,double n)
{
    return FallingFactorial(number,n)/(Factorial(n));
}