#include <stdio.h>
int main()
{
int num,i;
int fact=1;
printf("Enter a number:\n");
scanf("%d",&num);
for(i=1;i<=num;)
{
fact=i*fact;
i++;
}
printf("%d",fact);
}