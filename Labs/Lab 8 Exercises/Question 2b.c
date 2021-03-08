#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct rtpoint_t
{
    double r;
    double theta_in_radians;
};
typedef struct rtpoint_t rtpoint_t;
void rtpoint_to_xypoint_converter(struct rtpoint_t rtpoint);
int main()
{

    rtpoint_t rtpoint;
    double r1;
    double theta1;
    printf("Enter r: \n");
    scanf("%lf", &r1);
    rtpoint.r = r1;
    printf("Enter theta1: \n");
    scanf("%lf", &theta1);
    rtpoint.theta_in_radians = theta1;
    rtpoint_to_xypoint_converter(rtpoint);
    return EXIT_SUCCESS;
}

void rtpoint_to_xypoint_converter(struct rtpoint_t rtpoint)
{
    struct xypoint_t
    {
        double x;
        double y;
    };
    struct xypoint_t xypoint;
    xypoint.x = (rtpoint.r) * (cos(rtpoint.theta_in_radians));
    xypoint.y = (rtpoint.r) * (sin(rtpoint.theta_in_radians));
    printf("Your coordinates in (x,y) are: (%lf,%lf)", xypoint.x, xypoint.y);
}
