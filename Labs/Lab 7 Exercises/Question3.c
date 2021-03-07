#include <stdio.h>
#include <stdlib.h>
double FindSumBetweenIandJ(double array[],unsigned i,unsigned j);
int main()
{
    double array[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter i(0<=i<=10):\n");
    unsigned i,j;
    scanf("%u", &i);
    printf("Enter j(0<=j<=10):\n");
    scanf("%u", &j);
    if(i<=j)
    {
        printf("%lf",FindSumBetweenIandJ(array,i,j));
    }
    else
    {
        printf("Invalid input!i must be less than or equal to j!");
    }
    return EXIT_SUCCESS;
}
double FindSumBetweenIandJ(double array[],unsigned i,unsigned j)
{
    
    double sum=0;
    for(;i<=j;i++)
    {
        sum=sum+array[i];
    }
    return sum;
    
}