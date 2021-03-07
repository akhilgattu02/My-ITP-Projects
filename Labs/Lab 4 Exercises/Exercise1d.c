#include <stdio.h>
int main()
{
int num,i,dup,j;
j=0;
printf("Enter a number:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("Enter a number:\n");
scanf("%d",&dup);
j=j+dup;
}
printf("Sum is:%d",j);
}
