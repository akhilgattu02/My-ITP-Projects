#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    if(a<=b&&b<=c)
    {
    printf("Order of no is:\n%d\n%d\n%d",a,b,c);
    }
    else if(b<=c&&c<=a)
    {
    printf("Order of no is:\n%d\n%d\n%d",b,c,a);
    }
    else if(c<=a&&a<=b)
    {
    printf("Order of no is:\n%d\n%d\n%d",c,a,b);
    }
    else if(a<=c&&c<=b)
    {
    printf("Order of no is:\n%d\n%d\n%d",a,c,b);
    }
    else if(b<=a&&a<=c)
    {
    printf("Order of no is:\n%d\n%d\n%d",b,a,c);
    }
    else if(c<=b && b<=a)
    {
    printf("Order of no is:\n%d\n%d\n%d",c,b,a);
    }
   return 0;
}
