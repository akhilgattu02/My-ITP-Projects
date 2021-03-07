#include <stdio.h>
int main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
for(int j=0;j<=num;j++)
{
 for(int i=0;i<j;i++)
 {
 printf("*");
 }
printf("\n");
}
}