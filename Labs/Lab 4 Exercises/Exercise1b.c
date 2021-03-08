#include <stdio.h>
int main()
{
int num,j;
printf("Enter a number:\n");
scanf("%d",&num);
for(int i=1;;)
{
j=i*i;
if(j>num)
{
break;
}
else
{
printf("%d\n",j);
i++;
}
}
}