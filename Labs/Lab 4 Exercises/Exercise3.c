#include <stdio.h>
#include <math.h>
float fact(float num);
float log_x(float num);
float e_power_x(float num);
int main()
{
float input,num;
printf("Enter a number:\n");
scanf("%f",&input);
float sin_x(float num)/*New function*/
{
 float sum;
 sum=0;
for(float n=1;n<=20;)
{
sum=sum+((((pow(-1,n+1))*(pow(num,((2*n)-1)))/(fact((2*n)-1)))));
n=n+1;
}
return sum;
}

float e_power_x(float num)/*New function*/
{
   float sum_e; 
   sum_e=1;
   for(float i=1;i<=20;)
   {
     sum_e=sum_e+((pow(num,i))/fact(i));  
   i=i+1;
   }
   return sum_e;
}

printf("The following values are by Taylor series:\n");
printf("sin(your value) is:%f\n", sin_x(input));
printf("log(your value) is:%f\n",log_x(input-1));
printf("e^(your value) is:%f\n",e_power_x(input));
float sin_actual=sin(input);
float log_actual=log(input);
float e_power_x_actual=exp(input);
printf("The following values are actual:\n");
printf("sin(your value) is:%f\n", sin_actual);
printf("log(your value) is:%f\n",log_actual);
printf("e^(your value) is:%f\n",e_power_x_actual);
}

float fact(float num)
{
 if(num==0)
 {
    return 1;
 }
 else
 {
     return fact(num-1)*num;
 }
}

float log_x(float num)
{
float n,sum_l;
float sum_1=num;
for(n=1;n<=20;)
{
  sum_l= sum_l+((pow(-1,n+2)*(pow(num,n+1)))/(n+1));
  n=n+1;
}

return sum_l;

}

 

