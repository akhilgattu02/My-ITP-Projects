#include <stdio.h>
#include <complex.h>
int main()
{
double complex z1=2.0+3*I;
double complex z2=3.0+5*I;
printf("Complex z1 is %lf+%lfi\n",creal(z1),cimag(z1));
double complex z=z1*z2;
printf("Complex z2 is %lf+%lfi\n",creal(z2),cimag(z2));
printf("Complex z=z1*z2 is %lf+%lfi\n",creal(z),cimag(z));
return 0;
}