#include <stdio.h>


int main()
{
printf("Conisder the equation ax2+bx+c\n");
float a,b,c;
printf("Enter a:\n");
scanf("%f",&a);
printf("Enter b:\n");
scanf("%f",&b);
printf("Enter c:\n");
scanf("%f",&c);
if(b*b==4*a*c)
{
printf("Roots are real and equal\n");
}
if(b*b>4*a*c)
{
printf("Roots are real and unequal\n");
}
if(b*b<4*a*c)
{
printf("Roots are not real");
}
return 0;
}



