#include <stdio.h>
int main()
{
int num;
int i=0;
printf("Enter a number:\n");
scanf("%d",&num);
while(i<num)
{
printf("*");
i++;
}
}