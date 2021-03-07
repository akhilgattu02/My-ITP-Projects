#include <stdio.h>
int reverse(int num,int base);
int main()
{
int input,temp;
printf("Enter a number:\n");
scanf("%d",&input);
temp=input;
reverse(input,10);
printf("\n");
reverse(temp,2);
}
int reverse(int num,int base)
{
while(num>0)
{
int last_digit=num%base;
printf("%d",last_digit);
num=num/base;
}
}