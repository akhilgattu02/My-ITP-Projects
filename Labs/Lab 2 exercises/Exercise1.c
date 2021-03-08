#include <stdio.h>
int main()
{
float x=5/4;
printf("Integer division of 5/4:%f\n",x);
x=5.0/4.0;
printf("Value of 5/4 with 1 digit precision:%0.1f\n",x);
printf("Correct value of 5/4:%0.2f\n",x);
x=4.0/5.0;
printf("Value of 4/5 is:%0.1f\n",x);
x=3.1416;
printf("Value of pi upto 2 digit precision:%0.2f",x);
return 0;
}
