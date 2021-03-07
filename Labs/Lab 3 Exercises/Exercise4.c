#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
printf("Consider a triangle A(x1,y1),B(x2,y2) and C(x3,y3)\n");
int x1,y1,x2,y2,x3,y3;
float angle_a,angle_b,angle_c,a,b,c; /*Sides of triange are a,b,c*/
printf("Enter x1:\n");
scanf("%d",&x1);
printf("Enter y1:\n");
scanf("%d",&y1);
printf("Enter x2:\n");
scanf("%d",&x2);
printf("Enter y2:\n");
scanf("%d",&y2);
printf("Enter x3:\n");
scanf("%d",&x3);
printf("Enter y3:\n");
scanf("%d",&y3);
float area=abs((((x1)*(y2-y3))+((x2)*(y3-y1))+((x3)*(y1-y2)))/(2.0)); /*Area formula*/
/*Finding sides*/
a=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
b=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
c=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
/*cos rule*/
angle_a=acos((((b*b)+(c*c))-(a*a))/(2*b*c));
angle_b=acos((((a*a)+(c*c))-(b*b))/(2*a*c));
angle_c=acos((((a*a)+(b*b))-(c*c))/(2*a*b));
if(area==0)
{
printf("The points are collinear");
}
else
{
printf("Area is:%f\n",area);
printf("Angle A,in radian is:%f\n",angle_a);
printf("Angle B,in radian is:%f\n",angle_b);
printf("Angle C,in radian is:%f\n",angle_c);
}
return 0;
}

